configuration OMACAppC{}
implementation{
	components MainC, OMACC as OMAC;
	components new AMSenderC(6);
	components new AMReceiverC(6);
	components new TimerMilliC();
	components ActiveMessageC;

	OMAC.Boot -> MainC.Boot;
	OMAC.AMSend -> AMSenderC;
	OMAC.AMControl -> ActiveMessageC;
	OMAC.Timer -> TimerMilliC;
	OMAC.Receive -> ActiveMessageC;
	//OMAC.Receive -> AMReceiverC;
}
