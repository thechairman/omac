#include "Timer.h"

// sampling frequency in binary milliseconds
#define SAMPLING_FREQUENCY 6000
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
     interface SplitControl as PreambleControl;
     interface Receive;
     interface LowPowerListening;
  }
}

implementation
{
  message_t packet;
  nx_int16_t temp;
  //memset(&packet->data,0,8);


  event void Boot.booted() {
     call AMControl.start();
     dbg("Boot", "Booted, AMControl is Started at %llu \n", sim_time());
  }
  event void AMControl.startDone(error_t err) {
    if (err == SUCCESS) {
     call Timer.startPeriodic(SAMPLING_FREQUENCY);
    }
    else {
      call AMControl.start();
    }
  }
  task void sendTask() {
     radio_temp_packet_t* pay;
     pay = (radio_temp_packet_t*) call AMSend.getPayload(&packet, 0);
     pay->temp = temp;
     temp++;
     dbg("Boot","sending packet\n");
     call AMSend.send(PARENT_ADDR, &packet, sizeof(packet));
  }
  event void AMControl.stopDone(error_t err){}
  event void PreambleControl.startDone(error_t err){
    dbg("Boot","preamble is started, calling send task\n");
    post sendTask();
  }
  event void PreambleControl.stopDone(error_t err){}

  event void Timer.fired()
  {
     dbg("Boot","timer fired, preamble to be started\n");
     call PreambleControl.start();
  }

  event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len)
  {
     message_t *tmp = msg;
     dbg("Boot", "message is received\n");
     call AMSend.send(PARENT_ADDR, msg, sizeof(radio_temp_packet_t));
     dbg("Boot", "message is forwarded\n");
     return tmp;
  }

  event void AMSend.sendDone(message_t* bufPtr, error_t error) {dbg("Boot", "AM Send done\n");}
}
     
