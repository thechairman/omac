configuration OMACAppC{}
implementation{
	components MainC, OMACC as OMAC;
	components new AMSenderC(6);
	components new AMReceiverC(6);
	components new TimerMilliC();
	components ActiveMessageC;
	components LedsC;


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
#endif
	OMAC.Receive -> AMReceiverC;
	OMAC.Leds->LedsC;
}
