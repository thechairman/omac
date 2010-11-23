/*
 * Copyright (c) 2005-2006 Rincon Research Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Rincon Research Corporation nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * RINCON RESEARCH OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE
 */

/**
 * Low Power Listening for the CC2420.  This component is responsible for
 * delivery of an LPL packet, and for turning off the radio when the radio
 * has run out of tasks.
 *
 * The PowerCycle component is responsible for duty cycling the radio
 * and performing receive detections.
 *
 * @author David Moss
 */

#include "AM.h"
#include "LPL.h"

module LplP {
  provides {
    interface LPL;
    interface AMSend as LPLAMSend[am_id_t id];
    interface Receive as LPLReceive[am_id_t id];
    interface SplitControl;
  }
  
  uses {
    interface AMSend as SubSend[am_id_t id];
    interface Receive as SubReceive[am_id_t id];
//    interface AMPacket;
    interface Timer<TMilli> as PreambleTimer;
    interface Timer<TMilli> as OnTimer;
    interface Timer<TMilli> as SleepTimer;
//    interface Timer<TMilli> as SleepTimer;
//    interface CC2420PacketBody;
//    interface PacketAcknowledgements;
//    interface State as SendState;
//    interface State as RadioPowerState;
//    interface State as SplitControlState;
//    interface Timer<TMilli> as OffTimer;
//    interface Timer<TMilli> as SendDoneTimer;
//    interface Timer<TMilli> as OnTimer;
//    interface Random;
  }
}

implementation {
  
  /** The message currently being sent */
  norace message_t *currentSendMsg;
  
  /** The length of the current send message */
  uint8_t currentSendLen;

  uint8_t PreambleRxFlag = 0;
  uint8_t PreambleTxFlag = 0;
  
  /** Current state ON, OFF, RX or TX */
  uint8_t currentState = LPLSTATE_OFF;
  /** TRUE if the radio is duty cycling and not always on */
  bool dutyCycling;

  /** The current period of the duty cycle, equivalent of wakeup interval */
  uint16_t wakeupInterval = 0;

  /** The wakeup interval of the receiving node (parent) */
  uint16_t rxWakeupInterval = 0;

  uint16_t getActualDutyCycle(uint16_t dutyCycle);

  task void stopTimerTask() {
    if(call PreambleTimer.isRunning()) {
      call PreambleTimer.stop();
    }
    dbg("LPL", "LPLSTATE_TRANSMIT: %s: Stopping Preamble\n", sim_time_string());
    signal SplitControl.stopDone(SUCCESS);
  }

  /***************** SplitControl Commands ****************/
  command error_t SplitControl.start() {
    // Start the preamble timer
    dbg("LPL", "LPLSTATE_TRANSMIT: %s: Starting Preamble\n", sim_time_string());
    call PreambleTimer.startOneShot(rxWakeupInterval);
    return SUCCESS;
  }
  
  command error_t SplitControl.stop() {
    //we shouldn't need to stop the preamble timer, but just in case
    post stopTimerTask();
    return SUCCESS;
  }
  
  event void PreambleTimer.fired() {
    dbg("LPL", "LPLSTATE_TRANSMIT: %s: Stopping Preamble\n", sim_time_string());
    signal SplitControl.startDone(SUCCESS);
  }

  event void OnTimer.fired() {
    if(PreambleRxFlag) {
      currentState = LPLSTATE_RECEIVE;
      dbg("LPL", "LPLSTATE_RECEIVE: %s: \n", sim_time_string());
    }
    else if(currentState != LPLSTATE_TRANSMIT) {
      dbg("LPL", "LPLSTATE_OFF: %s: \n", sim_time_string());
      currentState = LPLSTATE_OFF;
      call SleepTimer.startOneShot(wakeupInterval);
    }
  }

  event void SleepTimer.fired() {
    dbg("LPL", "LPLSTATE_ON: %s: \n", sim_time_string());
    currentState = LPLSTATE_ON;
    call OnTimer.startOneShot(TON);
  }

  /***************** LPL Commands ***************/
  /**
   * Set this this node's radio wakeup interval, in milliseconds.
   * Once every interval, the node will wakeup and perform an Rx check 
   * on the radio.  Setting the wakeup interval to 0 will keep the radio
   * always on.
   *
   * This is the equivalent of setting the local duty cycle rate.
   *
   * @param wakeupIntervalMs the length of this node's Rx check interval, in [ms]
   */
  command void LPL.setLocalWakeupInterval(
      uint16_t wakeupIntervalMs) {
    dbg("LPL", "inside setLocalWakeupInterval\n");
    wakeupInterval = wakeupIntervalMs;
    
  }
  
  /**
   * @return the local node's wakeup interval, in [ms]
   */
  command uint16_t LPL.getLocalWakeupInterval() {
    return wakeupInterval;
  }
  
  
  /**
   * Configure this outgoing message so it can be transmitted to a neighbor mote
   * with the specified Rx wakeup interval.
   * @param msg Pointer to the message that will be sent
   * @param wakeupInterval The receiving node's wakeup interval, in [ms]
   */
  command void LPL.setRemoteWakeupInterval(message_t *msg, 
      uint16_t wakeupIntervalMs) {
    dbg("LPL", "setting LPL.setRemoteWakeupInterval\n");
    rxWakeupInterval = wakeupIntervalMs;
  }
  
  /**
   * @return the destination node's wakeup interval configured in this message
   */
  command uint16_t LPL.getRemoteWakeupInterval(message_t *msg) {
    return rxWakeupInterval;
  }
  

  command void LPL.turnOn() {
    currentState = LPLSTATE_ON;
    call OnTimer.startOneShot(TON);
  }
  
  command void LPL.setPreambleState(uint8_t state) {
    PreambleRxFlag = state;
  }

  /***************** Send Commands ***************/
  /**
   * Each call to this send command gives the message a single
   * DSN that does not change for every copy of the message
   * sent out.  For messages that are not acknowledged, such as
   * a broadcast address message, the receiving end does not
   * signal receive() more than once for that message.
   */
  command error_t LPLAMSend.send[am_id_t id](am_addr_t addr,
                                          message_t* amsg,
                    					  uint8_t len) {
    dbg("LPL", "Inside LPLAMSend.send\n");

    return call SubSend.send[id](addr, amsg, len);
  }

  command error_t LPLAMSend.cancel[am_id_t id](message_t *msg) {
    dbg("LPL", "inside LPLAMSend.cancel\n");
    return call SubSend.cancel[id](msg);
  }
  
  
  command uint8_t LPLAMSend.maxPayloadLength[am_id_t id]() {
    return call SubSend.maxPayloadLength[id]();
  }

  command void *LPLAMSend.getPayload[am_id_t id](message_t* msg, uint8_t len) {
    return call SubSend.getPayload[id](msg, len);
  }
  
  

  /***************** SubSend Events ***************/
  event void SubSend.sendDone[am_id_t id](message_t* msg, error_t error) {
    dbg("LPL", "Signalling LPLAMSend.sendDone\n");
    if(currentState == LPLSTATE_RECEIVE) {
      currentState = LPLSTATE_TRANSMIT;
      dbg("LPL", "LPLSTATE_TRANSMIT: %s: just changed\n", sim_time_string());
    }
    else {
      currentState = LPLSTATE_ON;
      dbg("LPL", "LPLSTATE_ON: %s: just changed\n", sim_time_string());
      call OnTimer.startOneShot(TON);
    }
    signal LPLAMSend.sendDone[id](msg, error);
  }
  
  /***************** SubReceive Events ***************/
  /**
   * If the received message is new, we signal the receive event and
   * start the off timer.  If the last message we received had the same
   * DSN as this message, then the chances are pretty good
   * that this message should be ignored, especially if the destination address
   * as the broadcast address
   */
  event message_t *SubReceive.receive[am_id_t id](message_t* msg, void* payload, 
      uint8_t len) {
    dbg("LPL", "LPL- inside SubReceive, signalling LPLReceive\n");
//    PreambleRxFlag = 1;
    return signal LPLReceive.receive[id](msg, payload, len);
  }
  
  
  /**
   * Check the bounds on a given duty cycle
   * We're never over 100%, and we're never at 0%
   */
  uint16_t getActualDutyCycle(uint16_t dutyCycle) {
    if(dutyCycle > 10000) {
      return 10000;
    } else if(dutyCycle == 0) {
      return 1;
    }
    
    return dutyCycle;
  } 
 default event message_t* LPLReceive.receive[am_id_t id](message_t* msg, void* payload, uint8_t len) {
    dbg("LPL", "LPL- inside default LPLReceive.receive\n");
    return msg;
  }
  
// default event void LPLAMSend.sendDone[am_id_t id](message_t* msg, error_t err) {
//   return;
// }
//
// default command error_t LPLAMSend.send[am_id_t id](int node, message_t* msg, uint8_t len) {
//   return FAIL;
// }
//
// default command error_t LPLAMSend.cancel[am_id_t id](message_t* msg) {
//   return FAIL;
// }

}

