// $Id: ActiveMessageC.nc,v 1.6 2007/09/04 17:19:22 scipio Exp $
/*
 * "Copyright (c) 2005 Stanford University. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 * 
 * IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF STANFORD UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * STANFORD UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND STANFORD UNIVERSITY
 * HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 * ENHANCEMENTS, OR MODIFICATIONS."
 */

/**
 *
 * The basic chip-independent TOSSIM Active Message layer for radio chips
 * that do not have simulation support.
 *
 * @author Philip Levis
 * @date December 2 2005
 */

configuration ActiveMessageC {
  provides {
    interface SplitControl;
#if defined(LPL2_ENABLE)
    interface LowPowerListening;
    interface SplitControl as PreambleControl;
#elif defined(LPL_ENABLE)
    interface LPL;
    interface SplitControl as PreambleControl;
#endif
    interface AMSend[uint8_t id];
    interface Receive[uint8_t id];
    interface Receive as Snoop[uint8_t id];
    interface Packet;
    interface AMPacket;
    interface PacketAcknowledgements;

  }
}
implementation {
  components TossimActiveMessageC as AM;
  components TossimPacketModelC as Network;
#if defined(LPL2_ENABLE)
    components DefaultLplP as LplC;
    components new TimerMilliC() as PreambleTimerC;
#elif defined(LPL_ENABLE)
    components LplP as LplC;
    components new TimerMilliC() as PreambleTimerC;
    components new TimerMilliC() as OnTimerC;
    components new TimerMilliC() as SleepTimerC;

#endif

  components CpmModelC as Model;

  components ActiveMessageAddressC as Address;
  components MainC;
  
  MainC.SoftwareInit -> Network;
  // Wiring the control structure
  SplitControl = Network;

  // plugin the Send interface
#if defined(LPL2_ENABLE)
//  AMSend       = LplC;
  LplC.PreambleTimer -> PreambleTimerC;
  LplC.SubSend -> AM.AMSend;
  LplC.SubReceive -> AM.Receive;

  LowPowerListening = LplC;
  AMSend = LplC.LPLAMSend;
  Receive = LplC.LPLReceive;
  PreambleControl = LplC.SplitControl;
  

//  LplC.SubSend -> AM.AMSend;
#elif defined(LPL_ENABLE)
  LplC.PreambleTimer -> PreambleTimerC;
  LplC.OnTimer -> OnTimerC;
  LplC.SleepTimer -> SleepTimerC;
  LplC.SubSend -> AM.AMSend;
  LplC.SubReceive -> AM.Receive;

  LPL = LplC;
  AMSend = LplC.LPLAMSend;
  Receive = LplC.LPLReceive;
  PreambleControl = LplC.SplitControl;
  
#else
  AMSend       = AM;
  Receive      = AM.Receive;
#endif
  Snoop        = AM.Snoop;
  Packet       = AM;
  AMPacket     = AM;
  PacketAcknowledgements = Network;

   //wiring the receive
  //LplC -> Network;

  AM.Model -> Network.Packet;
  AM.amAddress -> Address;
  
  Network.GainRadioModel -> Model;
}

