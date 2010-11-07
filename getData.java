public class getData{
	static	public final int TX = 0;
	static	public final int RX = 1;
	static	public final int SLP = 2;
	static	public final int IDLE = 3;
	static	public final int DWN = 4;
	
	static	public final int TX_PWR = 1;
	static	public final int RX_PWR = 1;
	static	public final int SLP_PWR = 1;
	static	public final int IDLE_PWR = 1;

	public static void main(java.lang.String args[]) throws java.io.FileNotFoundException{
		for(int i = 0; i < args.length; ++i){
			java.util.Scanner cin = new java.util.Scanner(new java.io.FileInputStream(args[i]));
			long timeInTX = 0, timeInRX = 0, timeInSlp= 0 , timeInIdle = 0 , lastTime = 0;
			int state = 0;

			java.lang.String str = cin.nextLine();
			long tmp = java.lang.Long.parseLong(str.substring(0, str.indexOf(' ')));
			lastTime = tmp;
			java.lang.String stateString = str.substring(str.indexOf(' ')+1);
			stateString = stateString.substring(0, stateString.indexOf(' '));

			if(stateString.compareTo("TX") == 0){
				state = TX;
			}else if(stateString.compareTo("RX") == 0){
				state = RX;
			}else if(stateString.compareTo("SLP") == 0 ){
				state = SLP;
			}else if(stateString.compareTo("SLP") == 0 ){
				state = IDLE;
			}

			while(cin.hasNextLine()){
				str = cin.nextLine();
				tmp = java.lang.Long.parseLong(str.substring(0, str.indexOf(' ')));

				switch(state){
					case TX:
						timeInTX += tmp - lastTime;
						break;
					case RX:
						timeInRX += tmp - lastTime;
						break;
					case IDLE:
						timeInIdle += tmp - lastTime;
						break;
					case SLP:
						timeInSlp += tmp - lastTime;

				}
				lastTime = tmp;


				stateString = str.substring(str.indexOf(' ')+1);
				stateString = stateString.substring(0, stateString.indexOf(' '));

				if(stateString.compareTo("TX") == 0){
					state = TX;
				}else if(stateString.compareTo("RX") == 0){
					state = RX;
				}else if(stateString.compareTo("SLP") == 0 ){
					state = SLP;
				}else if(stateString.compareTo("SLP") == 0 ){
					state = IDLE;
				}
			}

			//figure out the power here 
			long txPower = timeInTX * TX_PWR;
			long rxPower = timeInRX * RX_PWR;
			long slpPower = timeInSlp * SLP_PWR;
			long idlePower = timeInIdle * IDLE_PWR;

			System.out.println("Time in TX for mote " + i +": "+timeInTX);
			System.out.println("Time in RX for mote " + i +": "+timeInTX);
			System.out.println("Time in SLP for mote " + i +": "+timeInTX);
			System.out.println("Time in IDLE for mote " + i +": "+timeInTX);

			System.out.println(" ");


			System.out.println("Power used in TX by mote " + i + ": " + txPower);
			System.out.println("Power used in RX by mote " + i + ": " + rxPower);
			System.out.println("Power used in SLP by mote " + i + ": " + slpPower);
			System.out.println("Power used in IDLE by mote " + i + ": " + idlePower);

			long total = txPower+rxPower+slpPower+idlePower;

			System.out.println(" ");

			System.out.println("Total power used by mote "+i+": "+total);

			System.out.println(" ");
			System.out.println(" ");
		}
	}
}
