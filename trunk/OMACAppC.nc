configuration OMACAppC{}
implementation{
	components MainC, OMACC as OMAC;
	components new AMSenderC(6);
	components new AMReceiverC(6);
	components new TimerMilliC();
	components ActiveMessageC;

	OMAC.Boot -> MainC.Boot;
	OMAC.AMSend -> AMSenderC;
	OMAC.AMControl -> ActiveMessageC.SplitControl;
	OMAC.Timer -> TimerMilliC;
#if defined(LOW_POWER_LISTENING)
	OMAC.LowPowerListening -> ActiveMessageC;
	OMAC.PreambleControl -> ActiveMessageC.PreambleControl;
#endif
	OMAC.Receive -> AMReceiverC;
}
