public class getHwData{
	static public final java.lang.String StateOn = "IDLE_STATE";
	static public final java.lang.String StateSleep = "SLEEP_STATE";
	static public final java.lang.String StateRX = "RX_STATE";
	static public final java.lang.String StateTX = "TX_STATE";

	static public final char seperator = ' ';

	static	public final int TX = 0;
	static	public final int RX = 1;
	static	public final int SLP = 2;
	static	public final int IDLE = 3;
	static	public final int DWN = 4;

	//I believe these are all in milliamps		
	static	public final double TX_PWR = 17.4;//20.0;
	static	public final double RX_PWR = 19.7;//15.0;
	static	public final double SLP_PWR = 0.001;//0.03;
	static	public final double IDLE_PWR = 0.02;//3.613636364;

	static public final int timeUnits = 1000;

	public static void main(java.lang.String args[]) throws java.io.FileNotFoundException{
		java.util.Hashtable<java.lang.String, nodeStats> nodes = new java.util.Hashtable<java.lang.String, nodeStats>();
		for(int files = 0; files < args.length; files++){
			java.lang.String currentFile = args[files];
			java.util.Scanner cin = new java.util.Scanner(new java.io.FileInputStream(currentFile));
			while(cin.hasNextLine()){
				java.lang.String str = cin.nextLine();
                if(str.compareTo("") == 0)
                    continue;
                System.out.println("String is: " + str);
				/*if(str.compareTo("") == 0){
					continue;
				}else if(str.indexOf('(') == -1){
					continue;
				}*/
				//System.out.println(str);
				//int nodeId = java.lang.Integer.parseInt(str.substring(str.indexOf('(') + 1, str.indexOf(')')));
				//str = str.substring(str.indexOf(':')+2);

				//if(str.indexOf(':') == -1){
				//	continue;
				//}
				

				double currentTime;
                if(str.indexOf('|') == -1)
                    continue;
				str = str.substring(str.indexOf('|')+1);
				str = str.trim();
				try{       
					currentTime = java.lang.Double.parseDouble(str.substring(0,str.indexOf('|')));
				}catch(java.lang.NumberFormatException ex){
					System.out.println("that line didn't begin with a time stamp...O.o");
                    System.out.println("fail STring is: " + str);
					continue;
				}catch (java.lang.StringIndexOutOfBoundsException ex){

					System.out.println("that string didn't have another | caracter...");
                    System.out.println("fail STring is: " + str);
					continue;
                }

				java.lang.String stateString = str.substring(str.indexOf('|'));

				int state = -1;
					
				if(stateString.lastIndexOf(StateTX) != -1){
					state = TX;
				}else if(stateString.lastIndexOf(StateRX) != -1){
					state = RX;
				}else if(stateString.lastIndexOf(StateSleep) != -1 ){
					state = SLP;
				}else if(stateString.lastIndexOf(StateOn) != -1 ){
					state = IDLE;
				}else if(stateString.lastIndexOf("DWN") != -1){
					state = DWN;
				}else{
					System.out.println("whoops...that one didn't contain a state string...");
					continue;
				}
				
			//	if(.compareTo("state") != 0)
			//		continue;

				/*str = str.substring(str.indexOf(':')+1);
				double tempTime	= 0;
				tempTime += java.lang.Double.parseDouble(str.substring(0,str.indexOf(':'))) *60*60;

				str = str.substring(str.indexOf(':')+1);

				tempTime += java.lang.Double.parseDouble(str.substring(0,str.indexOf(':'))) * 60;
				str = str.substring(str.indexOf(':')+1);

				double currentTime = java.lang.Double.parseDouble(str.substring(0, str.indexOf(':')));
				currentTime  += tempTime;
				//str = str.substring(str.indexOf(seperator)+1);*/
				

	//			java.lang.String stateString = str.substring(str.indexOf(' '));



				if(!nodes.containsKey(currentFile)){
					nodeStats tmp = new nodeStats();
					nodes.put(currentFile, tmp);

					tmp.file = currentFile;
					tmp.nodeId = -1;
					tmp.lastTime = currentTime;
					tmp.state = state;
					continue;
				}

				nodeStats theNode = nodes.get(currentFile);

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
						if(currentTime < theNode.lastTime)
							continue;
						theNode.timeInIdle += currentTime - theNode.lastTime;
						theNode.state = state;
						break;
					case SLP:
						theNode.timeInSlp += currentTime - theNode.lastTime;
						theNode.state = state;

				}

				theNode.lastTime = currentTime;
			}
		}
		//now to step through the hash table to calculate things
		java.util.Enumeration e = nodes.elements();

		System.out.println("The node ids are garbage...go by the file names...");
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
			double txPower = node.timeInTX/timeUnits * (TX_PWR / 1000) * 3;
			double rxPower = node.timeInRX /timeUnits * (RX_PWR / 1000) * 3;
			double slpPower = node.timeInSlp /timeUnits * (SLP_PWR / 1000) * 3;
			double idlePower = node.timeInIdle /timeUnits * (IDLE_PWR / 1000) * 3;

			System.out.println("**********"+ node.file + "**********");

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
	public String file;
	public int nodeId;
	public double timeInTX = 0, timeInRX = 0, timeInSlp= 0 , timeInIdle = 0 , lastTime = 0;
	public int state = -1;
}
