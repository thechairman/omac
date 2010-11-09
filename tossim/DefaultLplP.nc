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

#include "DefaultLpl.h"
#include "AM.h"

module DefaultLplP {
  provides {
    interface LowPowerListening;
    interface AMSend as LPLAMSend[am_id_t id];
    interface Receive as LPLReceive[am_id_t id];
    interface SplitControl;
  }
  
  uses {
    interface AMSend as SubSend[am_id_t id];
    interface Receive as SubReceive[am_id_t id];
//    interface AMPacket;
    interface Timer<TMilli> as PreambleTimer;
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
  
  /** TRUE if the radio is duty cycling and not always on */
  bool dutyCycling;

  /** The current period of the duty cycle, equivalent of wakeup interval */
  uint16_t sleepInterval = 0;

  /** The sleep interval of the receiving node (parent) */
  uint16_t rxSleepInterval = 0;

  uint16_t getActualDutyCycle(uint16_t dutyCycle);

  task void stopTimerTask() {
    if(call PreambleTimer.isRunning()) {
      call PreambleTimer.stop();
    }
    signal SplitControl.stopDone(SUCCESS);
  }

  /***************** SplitControl Commands ****************/
  command error_t SplitControl.start() {
    // Start the preamble timer
    dbg("LPL", "Starting Preamble Timer\n");
    call PreambleTimer.startOneShot(rxSleepInterval);
    return SUCCESS;
  }
  
  command error_t SplitControl.stop() {
    //we shouldn't need to stop the preamble timer, but just in case
    dbg("LPL", "Stopping Preamble Timer\n");
    post stopTimerTask();
    return SUCCESS;
  }
  
  event void PreambleTimer.fired() {
    dbg("LPL", "PreambleTimer fired\n");
    signal SplitControl.startDone(SUCCESS);
  }

  /***************** LowPowerListening Commands ***************/
  /**
   * Set this this node's radio sleep interval, in milliseconds.
   * Once every interval, the node will sleep and perform an Rx check 
   * on the radio.  Setting the sleep interval to 0 will keep the radio
   * always on.
   *
   * This is the equivalent of setting the local duty cycle rate.
   *
   * @param sleepIntervalMs the length of this node's Rx check interval, in [ms]
   */
  command void LowPowerListening.setLocalSleepInterval(
      uint16_t sleepIntervalMs) {
    dbg("LPL", "inside setLocalSleepInterval\n");
    sleepInterval = sleepIntervalMs;
    
  }
  
  /**
   * @return the local node's sleep interval, in [ms]
   */
  command uint16_t LowPowerListening.getLocalSleepInterval() {
    return sleepInterval;
  }
  
  /**
   * Set this node's radio duty cycle rate, in units of [percentage*100].
   * For example, to get a 0.05% duty cycle,
   * <code>
   *   call LowPowerListening.setDutyCycle(5);
   * </code>
   *
   * For a 100% duty cycle (always on),
   * <code>
   *   call LowPowerListening.setDutyCycle(10000);
   * </code>
   *
   * This is the equivalent of setting the local sleep interval explicitly.
   * 
   * @param dutyCycle The duty cycle percentage, in units of [percentage*100]
   */
  command void LowPowerListening.setLocalDutyCycle(uint16_t dutyCycle) {
    dbg("LPL", "inside setLocalDutyCycle\n");
    call LowPowerListening.setLocalSleepInterval(
        call LowPowerListening.dutyCycleToSleepInterval(dutyCycle));
  }
  
  /**
   * @return this node's radio duty cycle rate, in units of [percentage*100]
   */
  command uint16_t LowPowerListening.getLocalDutyCycle() {
    return call LowPowerListening.sleepIntervalToDutyCycle(sleepInterval);
  }
  
  
  /**
   * Configure this outgoing message so it can be transmitted to a neighbor mote
   * with the specified Rx sleep interval.
   * @param msg Pointer to the message that will be sent
   * @param sleepInterval The receiving node's sleep interval, in [ms]
   */
  command void LowPowerListening.setRxSleepInterval(message_t *msg, 
      uint16_t sleepIntervalMs) {
    dbg("LPL", "setting LowPowerListening.setRxSleepInterval\n");
    rxSleepInterval = sleepIntervalMs;
  }
  
  /**
   * @return the destination node's sleep interval configured in this message
   */
  command uint16_t LowPowerListening.getRxSleepInterval(message_t *msg) {
    return rxSleepInterval;
  }
  
  /**
   * Configure this outgoing message so it can be transmitted to a neighbor mote
   * with the specified Rx duty cycle rate.
   * Duty cycle is in units of [percentage*100], i.e. 0.25% duty cycle = 25.
   * 
   * @param msg Pointer to the message that will be sent
   * @param dutyCycle The duty cycle of the receiving mote, in units of 
   *     [percentage*100]
   */
  command void LowPowerListening.setRxDutyCycle(message_t *msg, 
      uint16_t dutyCycle) {
 //   rxSleepInterval = call LowPowerListening.dutyCycleToSleepInterval(dutyCycle);
  }
  
    
  /**
   * @return the destination node's duty cycle configured in this message
   *     in units of [percentage*100]
   */
  command uint16_t LowPowerListening.getRxDutyCycle(message_t *msg) {
    return call LowPowerListening.sleepIntervalToDutyCycle(rxSleepInterval);
  }
  
  /**
   * Convert a duty cycle, in units of [percentage*100], to
   * the sleep interval of the mote in milliseconds
   * @param dutyCycle The duty cycle in units of [percentage*100]
   * @return The equivalent sleep interval, in units of [ms]
   */
  command uint16_t LowPowerListening.dutyCycleToSleepInterval(
      uint16_t DutyCycle) {
    dbg("LPL", "Inside LowPowerListening.dutyCycleToSleepInterval\n");
    DutyCycle = getActualDutyCycle(DutyCycle);
    
    if(DutyCycle == 10000) {
      return 0;
    }
    
    return (DUTY_ON_TIME * (10000 - DutyCycle)) / DutyCycle;
  }
  
  /**
   * Convert a sleep interval, in units of [ms], to a duty cycle
   * in units of [percentage*100]
   * @param sleepInterval The sleep interval in units of [ms]
   * @return The duty cycle in units of [percentage*100]
   */
  command uint16_t LowPowerListening.sleepIntervalToDutyCycle(
      uint16_t sleepIntervalMS) {
    if(sleepIntervalMS == 0) {
      return 10000;
    }
    
    return getActualDutyCycle((DUTY_ON_TIME * 10000) 
        / (sleepIntervalMS + DUTY_ON_TIME));
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

