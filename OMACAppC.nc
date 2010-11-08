configuration OMACAppC{}
implementation{
	components MainC, OMACC as OMAC;
	components new AMSenderC(6) as Send6;
	components new AMReceiverC(6) as Receive6;
	components new TimerMilliC();
	components ActiveMessageC;

	OMAC.Boot -> MainC.Boot;
	OMAC.AMSend -> Send6;
	OMAC.AMControl -> ActiveMessageC;
	OMAC.Timer -> TimerMilliC;
	//OMAC.Receive -> ActiveMessageC;
	OMAC.Receive -> Receive6;
}

