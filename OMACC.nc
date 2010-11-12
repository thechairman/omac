#include "Timer.h"

// sampling frequency in binary milliseconds
#define SAMPLING_FREQUENCY 300
#define PARENT_ADDR AM_BROADCAST_ADDR
//need to create a message payload struct

typedef nx_struct radio_temp__packet {
  nx_int16_t temp;
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
#ifdef LPL_ENABLE
    interface SplitControl as PreambleControl;
#endif
    interface LowPowerListening;
  }
}

implementation
{
  message_t packet;
  int16_t temp=0;
  //memset(&packet->data,0,8);
//  bool fordwardflag=FALSE;
//  bool splitFlag=FALSE;
//  message_t *msgbuffer[50];
//  int16_t count=0;

//  // Tasks
//  task void sendTask() {
//    int16_t i;
//    for(i=0;i<count;i++){ 
//      call AMSend.send(PARENT_ADDR, msgbuffer[count], sizeof(radio_temp_packet_t));
//      dbg("Boot","timer fired, AMSend is called\n");
//      count=0;
//      splitFlag=FALSE;
//    }  
//  }

  event void Boot.booted() {
    call AMControl.start();
    dbg("Boot", "Booted, AMControl is Started for node %d\n", TOS_NODE_ID);
  }
  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
      call Timer.startPeriodic(SAMPLING_FREQUENCY);
    }
    else {
      dbg("Boot", "AMControl error\n");
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  event void Timer.fired()
  {
    radio_temp_packet_t* pay;
    pay = (radio_temp_packet_t*) call AMSend.getPayload(&packet, 0);
    pay->temp = temp;
    temp++;
    call AMSend.send(PARENT_ADDR, &packet, sizeof(radio_temp_packet_t));
  }
#if defined(LPL_ENABLE)
  event void PreambleControl.startDone(error_t error){
    if (error==FAIL) dbg("Boot", "LPLSendcontrol startDone error");
    else{
      dbg("Boot","timer fired, AMSend is called\n");
      call AMSend.send(PARENT_ADDR, &packet, sizeof(radio_temp_packet_t));
    }
  }
  event void PreambleControl.stopDone(error_t error){ }
#endif
  event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len)
  {
    dbg("Boot", "message is received\n");
    call AMSend.send(PARENT_ADDR, msg, sizeof(radio_temp_packet_t));    
    return msg;
  }


  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    dbg("Boot", "AM Send done\n");
  }

} 
