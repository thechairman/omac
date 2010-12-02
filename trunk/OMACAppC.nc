#include "printf.h"
configuration OMACAppC{}
implementation{
	components MainC, OMACC as OMAC;
	components new AMSenderC(6);
	components new AMReceiverC(6);
	components new TimerMilliC();
	components ActiveMessageC;
	components LedsC;
    components CC1000ControlP;

	OMAC.Boot -> MainC.Boot;
	OMAC.AMSend -> AMSenderC;
	OMAC.AMControl -> ActiveMessageC.SplitControl;
	OMAC.Timer -> TimerMilliC;
#if defined(LPL2_ENABLE)
	OMAC.LowPowerListening -> ActiveMessageC;
	OMAC.PreambleControl -> ActiveMessageC.PreambleControl;
#elif defined(LPL_ENABLE)
	OMAC.LPL -> ActiveMessageC;
	OMAC.PreambleControl -> ActiveMessageC.PreambleControl;
#elif defined(LOW_POWER_LISTENING)
	OMAC.LPL -> ActiveMessageC;
    OMAC.CC1000Control -> CC1000ControlP;
#endif
	OMAC.Receive -> AMReceiverC;
	OMAC.Leds->LedsC;
}
