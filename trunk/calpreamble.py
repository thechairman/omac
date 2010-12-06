import math
T=60.0
B=2.0
toth=4

Perc=0.2

I_listen=3.613636364
I_rx=15.0
I_tx=20.0
#I_tx5=8+14
#I_tx0=*+17.4
I_sleep=0.03
ton=0.0022
sleepPeriod=[]
sleepPeriod.append("always on")

Lpak=36.0
trxb=416.0*10.0**(-6)
ttxb=trxb
tdata=1.1
dparent=1.0
h=toth-1
temp1=(B**h-1)/(B-1)
temp2=B**h-1
Numerator=(I_rx-I_sleep)*ton*(temp1+Perc*temp2)
temp3=(ton-Lpak*trxb)*(temp1+Perc*temp2)
temp4=ton*(1-dparent)/dparent+Lpak*ttxb
temp5=temp1*temp4
#print "temp3"
#print temp3
#print "temp5" 
#print temp5
Denominator=(I_listen-I_sleep)*(T+temp3-temp5)
#print "Denominator" 
#print Denominator
d=math.sqrt(Numerator/Denominator)
toff=ton/d-ton
sleepPeriod.append(toff*1000)
dparent=d
for h in range (toth-2,1,-1):
	temp1=(B**h-1)/(B-1)
	temp2=B**h-1+(B**(h+1)-1)/(B-1)
	Numerator=(I_rx-I_sleep)*ton*(temp1+Perc*temp2)
	temp3=(ton-Lpak*trxb)*(temp1+Perc*temp2)
	temp4=ton*(1-dparent)/dparent+Lpak*ttxb
	temp5=temp1*temp4
	Denominator=(I_listen-I_sleep)*(T+temp3-temp5)
	d=math.sqrt(Numerator/Denominator)
	toff=ton/d-ton
	sleepPeriod.append(toff*1000)
	dparent=d
sleepPeriod.append("always off")
print str(sleepPeriod)	
