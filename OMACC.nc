#include "Timer.h"
#include "omac.h"
#include "printf.h"
// small hack so that others don't have to modify this code to compile
#ifdef MAKE_COMPATIBLE
#define setRemoteWakeupInterval setRxSleepInterval
#define setLocalWakeupInterval setLocalSleepInterval
#endif

// sampling frequency in milliseconds
#define SAMPLING_FREQUENCY 30000
#define PARENT_ADDR AM_BROADCAST_ADDR

//need to create a message payload struct

typedef nx_struct radio_temp__packet {
  nx_int16_t isPreamble;
  nx_int16_t hop_from_sink;
  nx_int16_t data;
} radio_temp_packet_t;


module OMACC @safe()
{
  uses {
    interface Boot;
    interface AMSend;
    interface Leds;
    interface Timer<TMilli>;
    interface SplitControl as AMControl;
    interface Receive;
  

#if defined(LPL2_ENABLE)
    interface SplitControl as PreambleControl;
#endif
#if defined(LPL_ENABLE)
    interface LPL;
    interface SplitControl as PreambleControl;
#else
#ifndef LOW_POWER_LISTENING
#warning "LOW_POWER_LISTENING is not defined in Makefile"
#endif
    interface LowPowerListening as LPL;
    interface CC1000Control;
#endif
  }
}

implementation
{
  message_t MSG;
  uint8_t dataReady = 0;
  message_t *childMsg;
  int16_t temp=0;
  int16_t myHop = 0;
  int16_t BFactor = 0;

  int16_t getMyHop() {
#if defined(LPL_ENABLE)    
    int16_t myHop;
    myHop = (TOS_NODE_ID >> 6) & 0x07;
    return myHop; 
#else
    return HOP[TOS_NODE_ID-1];
#endif
  }

  int16_t getSelfSleepTime() {
    return SLEEPTIME[myHop];
  }

  int16_t getParentSleepTime() {
    return SLEEPTIME[myHop-1];
  }
  // this function sends a message 
  void sendMessage(message_t *msg) {
    radio_temp_packet_t* pay;
    pay = (radio_temp_packet_t*) call AMSend.getPayload(msg, 6);
    pay->isPreamble = 0;
    pay->hop_from_sink = myHop;
    pay->data = temp;
    call LPL.setRemoteWakeupInterval(msg, getParentSleepTime());
    call AMSend.send(PARENT_ADDR, msg, sizeof(radio_temp_packet_t));
    call Leds.led1Toggle();

  }
#if defined(LPL_ENABLE) // we are sending a preamble msg in this case
  void sendPreamble() {
    radio_temp_packet_t* pay;
    pay = (radio_temp_packet_t*) call AMSend.getPayload(&MSG, 6);
    pay->isPreamble = 1;
    pay->hop_from_sink = myHop;
    pay->data = temp;
    call LPL.setRemoteWakeupInterval(&MSG, getParentSleepTime());
    call PreambleControl.start();
    call AMSend.send(PARENT_ADDR, &MSG, sizeof(radio_temp_packet_t));
  }
#endif

  event void Boot.booted() { 
    myHop = getMyHop();
    call AMControl.start();
    dbg("omacapp", "Booted, AMControl is Started for node %d at hop %d\n", TOS_NODE_ID, myHop);
    //printf ("Booted, AMControl is Started for node %d at hop %d", TOS_NODE_ID, myHop);
    //printfflush(); 
    call LPL.setLocalWakeupInterval(getSelfSleepTime());
    call Leds.led2Toggle();
#if defined(LPL_ENABLE)
    call LPL.turnOn();
#endif
  }
  event void AMControl.startDone(error_t err) {
    call CC1000Control.setRFPower(0x09);
    if (err == SUCCESS) {
      call Timer.startPeriodic(SAMPLING_FREQUENCY);
    }
    else {
      dbg("omacapp", "AMControl error\n");
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  event void Timer.fired()  {
    dataReady = 1;
    temp++;
#if defined(LPL_ENABLE)
    sendPreamble();
#else
    sendMessage(&MSG);
#endif
  }
#if defined(LPL_ENABLE) || defined(LPL2_ENABLE)
  event void PreambleControl.startDone(error_t error){
    if (error==FAIL) {
      dbg("omacapp", "PreambleControl startDone error");
    }
    else {
      // At this point preamble is finished
      // if my own data is ready to be sent
      if(dataReady) {
        dbg("omacapp","PreambleControl done, sending my packet\n");
        //printf("PreambleControl done, sending my packet");
    //printfflush(); 
        sendMessage(&MSG);
        dataReady = 0;
      }
      //else it's a child's packet which is to be forwarded
      else {
        dbg("omacapp","PreambleControl done, forwarding child packet\n");
        //printf("PreambleControl done, forwarding child packet");
    //printfflush(); 
        sendMessage(childMsg);
      }
    }
  }
  event void PreambleControl.stopDone(error_t error){ }
#endif
  event message_t*Receive.receive(message_t *msg, void *payload, uint8_t len)
  {
    radio_temp_packet_t* pay;
    pay = (radio_temp_packet_t*) call AMSend.getPayload(msg, 6);
    call Leds.led0Toggle();

#if defined(LPL_ENABLE)
    // If it's a preamble don't forward it, and we need to activate LPL
    if(pay->isPreamble) {
      call LPL.setPreambleState(1);
      call LPL.turnOn();
    } 
    // need to consider only packets from own children
    else 
#endif      
    if(pay->hop_from_sink == myHop + 1) {
      dbg("omacapp", "message received with data: %d\n", pay->data);
      //printf("msg received, data: %d", pay->data);
    //printfflush(); 
      // set hop so that msg from neighbor's children don't go through
      pay->hop_from_sink = myHop;
      call LPL.setRemoteWakeupInterval(msg, getParentSleepTime());
      childMsg = msg;
      call LPL.setPreambleState(0);
#if defined(LPL_ENABLE)
      sendPreamble();
#else
      sendMessage(msg);   
#endif
    }
    else {
      dbg("omacapp", "overheard message from neighbor at hop %d\n", pay->hop_from_sink);
      call LPL.setPreambleState(0);
    }
    return msg;
  }


  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    dbg("omacapp", "AM Send done\n");


  }

} 
