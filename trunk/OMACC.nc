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
     interface SplitControl as LPLSendControl;
  }
}

implementation
{
  message_t packet;
  nx_int16_t temp=0;
  //memset(&packet->data,0,8);
  bool fordwardflag=FALSE;
  bool splitFlag=FALSE;
  message_t *msgbuffer[50];
  int16_t count=0;

  event void Boot.booted() {
     call AMControl.start();
     dbg("Boot", "Booted, AMControl is Started\n");
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
     msgbuffer[count]=&packet;
     count++;
     if(splitFlag==FALSE){
	error_t result=call LPLSendControl.start();
     	splitFlag=TRUE;
	dbg("Boot","timer fired, LPLSendControl started");
	if(result==EBUSY||result==FAIL) dbg("Boot","LPLSendControl start error");
    }
  }
	


  event void LPLSendControl.startDone(error_t error){
    if (error==FAIL) dbg("Boot", "LPLSendcontrol startDone error");
    else{
	  for(int16_t i=0;i<count;i++){ 
	  	call AMSend.send(PARENT_ADDR, msgbuffer[count], sizeof(radio_temp_packet_t));
          	dbg("Boot","timer fired, AMSend is called\n");
		count=0;
		splitFlag=FALSE;
		}
	}
  }

  event message_t* Receive.receive(message_t *msg, void *payload, uint8_t len)
  {
     dbg("Boot", "message is received\n");
     msgbuffer[count]=msg;
     count++;
     if (splitFlag==FALSE){
     	error_t result=call LPLSendControl.start();
	splitFlag=TRUE;
	dbg("Boot","timer fired, splitcontrol started-Forward\n");
	if(result==EBUSY||result==FAIL) dbg("Boot","LPLSendControl start error\n");
	return msg;
	}
  }


  event void AMSend.sendDone(message_t* bufPtr, error_t error) {dbg("Boot", "AM Send done\n");}

} 
