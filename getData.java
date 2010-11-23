public class getData{
	static public final java.lang.String StateOn = "LPLSTATE_ON";
	static public final java.lang.String StateSleep = "LPLSTATE_OFF";
	static public final java.lang.String StateRX = "LPLSTATE_RECEIVE";
	static public final java.lang.String StateTX = "LPLSTATE_TRANSMIT";

	static public final char seperator = ' ';

	static	public final int TX = 0;
	static	public final int RX = 1;
	static	public final int SLP = 2;
	static	public final int IDLE = 3;
	static	public final int DWN = 4;

	//I believe these are all in milliamps		
	static	public final double TX_PWR = 17.4;//20.0;
	static	public final double RX_PWR = 19.7//15.0;
	static	public final double SLP_PWR = 0.001//0.03;
	static	public final double IDLE_PWR = 0.02//3.613636364;

	public static void main(java.lang.String args[]) throws java.io.FileNotFoundException{

		java.util.Hashtable<java.lang.Integer, nodeStats> nodes = new java.util.Hashtable<java.lang.Integer, nodeStats>();
		java.util.Scanner cin = new java.util.Scanner(new java.io.FileInputStream(args[0]));
		while(cin.hasNextLine()){
			java.lang.String str = cin.nextLine();
		
			if(str.compareTo("") == 0){
				continue;
			}else if(str.indexOf('(') == -1){
				continue;
			}
			System.out.println(str);
			int nodeId = java.lang.Integer.parseInt(str.substring(str.indexOf('(') + 1, str.indexOf(')')));
			str = str.substring(str.indexOf(':')+2);

			if(str.indexOf(':') == -1){
				continue;
			}

			java.lang.String stateString = str.substring(0, str.indexOf(':'));

			int state = -1;
				
			if(stateString.compareTo(StateTX) == 0){
				state = TX;
			}else if(stateString.compareTo(StateRX) == 0){
				state = RX;
			}else if(stateString.compareTo(StateSleep) == 0 ){
				state = SLP;
			}else if(stateString.compareTo(StateOn) == 0 ){
				state = IDLE;
			}else if(stateString.compareTo("DWN") == 0){
				state = DWN;
			}else{
				continue;
			}
			
		//	if(.compareTo("state") != 0)
		//		continue;

			str = str.substring(str.indexOf(':')+1);
			double tempTime	= 0;
			tempTime += java.lang.Double.parseDouble(str.substring(0,str.indexOf(':'))) *60*60;

			str = str.substring(str.indexOf(':')+1);

			tempTime += java.lang.Double.parseDouble(str.substring(0,str.indexOf(':'))) * 60;
			str = str.substring(str.indexOf(':')+1);

			double currentTime = java.lang.Double.parseDouble(str.substring(0, str.indexOf(':')));
			currentTime  += tempTime;
			//str = str.substring(str.indexOf(seperator)+1);
			

//			java.lang.String stateString = str.substring(str.indexOf(' '));



			if(!nodes.containsKey(nodeId)){
				nodeStats tmp = new nodeStats();
				nodes.put(new java.lang.Integer(nodeId), tmp);

				tmp.nodeId = nodeId;
				tmp.lastTime = currentTime;
				tmp.state = state;
				continue;
			}

			nodeStats theNode = nodes.get(new java.lang.Integer(nodeId));

			switch(theNode.state){
				case TX:
					theNode.timeInTX += currentTime - theNode.lastTime;
					theNode.state = state;
					break;
				case RX:
					theNode.timeInRX += currentTime - theNode.lastTime;
					theNode.state = state;
					break;
				case IDLE:
					theNode.timeInIdle += currentTime - theNode.lastTime;
					theNode.state = state;
					break;
				case SLP:
					theNode.timeInSlp += currentTime - theNode.lastTime;
					theNode.state = state;

			}
		}

		//now to step through the hash table to calculate things
		java.util.Enumeration e = nodes.elements();
		while(e.hasMoreElements()){
			nodeStats node = (nodeStats)e.nextElement();


			//figure out the power here 
			//its actually energy in injoules
			//if i did the demensional analysis
			//
			//it should be W = I * V
			//and then P = W * T
			//but I think I may have the units wrong...
			//th three is the 3V  the mote runs on.
			//*_PWR is the current used by the radio in that state
			//node.timeIN* is the time in seconds spent in that state
			double txPower = node.timeInTX * (TX_PWR / 1000) * 3;
			double rxPower = node.timeInRX * (RX_PWR / 1000) * 3;
			double slpPower = node.timeInSlp * (SLP_PWR / 1000) * 3;
			double idlePower = node.timeInIdle * (IDLE_PWR / 1000) * 3;

			System.out.println("Time in TX for mote " + node.nodeId +": "+node.timeInTX);
			System.out.println("Time in RX for mote " + node.nodeId +": "+node.timeInRX);
			System.out.println("Time in SLP for mote " + node.nodeId +": "+node.timeInSlp);
			System.out.println("Time in IDLE for mote " + node.nodeId +": "+node.timeInIdle);

			System.out.println(" ");
			double totalTime = node.timeInTX + node.timeInRX + node.timeInSlp + node.timeInIdle;
			System.out.println("Total time used by mote "+ node.nodeId + ": "+totalTime);
			System.out.println(" ");

			System.out.println("Power used in TX by mote " + node.nodeId + ": " + txPower);
			System.out.println("Power used in RX by mote " + node.nodeId + ": " + rxPower);
			System.out.println("Power used in SLP by mote " + node.nodeId + ": " + slpPower);
			System.out.println("Power used in IDLE by mote " + node.nodeId + ": " + idlePower);

			double total = txPower+rxPower+slpPower+idlePower;

			System.out.println(" ");

			System.out.println("Total power used by mote "+ node.nodeId + ": "+total);
			System.out.println("Average milliwatts used by mote "+node.nodeId+": "+((total/totalTime)*1000));
			System.out.println(" ");
			System.out.println(" ");
		}
	}
}

class nodeStats{
	public int nodeId;
	public double timeInTX = 0, timeInRX = 0, timeInSlp= 0 , timeInIdle = 0 , lastTime = 0;
	public int state = -1;
}
