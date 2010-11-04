#include "Timer.h"

// sampling frequency in binary milliseconds
#define SAMPLING_FREQUENCY 300
#define PARENT_ADDR TOS_BCAST_ADDR
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
  }
}

implementation
{
  message_t* packet;
  nx_int16_t temp;
  //memset(&packet->data,0,8);


  event void Boot.booted() {
     call AMControl.start();
     dbg("Boot", "Booted, AMControl Started");
  }
  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
     call Timer.startPeriodic(SAMPLING_FREQUENCY);
    }
    else {
      call AMControl.start();
    }
  }

event void AMControl.stopDone(error_t err){}

  event void Timer.fired()
  {
      radio_temp_packet_t* pay = (radio_temp_packet_t*) call AMSend.getPayload(packet,sizeof(radio_temp_packet_t));
     pay->temp = temp;
     call AMSend.send(PARENT_ADDR, packet, sizeof(*packet));
     dbg("Boot","timer fired, AMSend called");
  }

  event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len)
  {
     call AMSend.send(PARENT_ADDR, packet, sizeof(*msg));
     return packet;
     dbg("Boot", "message received");
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {dbg("Boot", "AM Send done");}
}
     
