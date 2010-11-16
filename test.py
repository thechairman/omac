from tinyos.tossim.TossimApp import *
from InitMsg import *
from TOSSIM import *
import sys
import math

#calculate preamble length
T=300.0
B=3.0
toth=9

Perc=0.2

I_listen=3.613636364
I_rx=15.0
I_tx=20.0
#I_tx5=8+14
#I_tx0=*+17.4
I_sleep=0.03
ton=0.0022
preamblelist=[]

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
Denominator=(I_listen-I_sleep)*(T+temp3-temp5-tdata)
d=math.sqrt(Numerator/Denominator)
toff=ton/d-ton
preamblelist.append(toff)
dparent=d
for h in range (toth-2,1,-1):
	temp1=(B**h-1)/(B-1)
	temp2=B**h-1+(B**(h+1)-1)/(B-1)
	Numerator=(I_rx-I_sleep)*ton*(temp1+Perc*temp2)
	temp3=(ton-Lpak*trxb)*(temp1+Perc*temp2)
	temp4=ton*(1-dparent)/dparent+Lpak*ttxb
	temp5=temp1*temp4
	Denominator=(I_listen-I_sleep)*(T+temp3-temp5-tdata)
	d=math.sqrt(Numerator/Denominator)
	toff=ton/d-ton
	preamblelist.append(toff)
	dparent=d
preamblelist.append("always off")
print str(preamblelist)	

#begin configuration
channelList=["omacapp","Boot", "TossimPacketModelC"]#, "AM","TossimPacketModelC", "Queue", "Tossim"]
nodelist=[0 for i in range(NNODES)]
n = NescApp()
#t=Tossim(n.variables.variables())
t=Tossim([])
r=t.radio()
def initNodes():
  global t
  global nodelist
  global NNODES
  global channelList
  for i in range(len(channelList)):
    t.addChannel(channelList[i], sys.stdout)
  for i in range(NNODES):
    nodelist[i]=t.getNode(i+1)
    nodelist[i].bootAtTime(2*t.ticksPerSecond()+(90*(i+1) + 2 << i))
#    v=nodelist[i].getVariable("OMACC.a")
#    v.setData(100)
#    print v.getData()

initNodes()

f = open("topo.txt", "r")
lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    print " ", s[0], " ", s[1], " ", s[2];
    r.add(int(s[0]), int(s[1]), float(s[2]))

noise = open("meyer-heavy.txt", "r")
lines = noise.readlines()
for line in lines:
  str1 = line.strip()
  if (str1 != ""):
    val = int(str1)
    for i in range(1, NNODES+1):
      t.getNode(i).addNoiseTraceReading(val)

for i in range(1, NNODES+1):
  print "Creating noise model for ",i;
  t.getNode(i).createNoiseModel()

totduration=55555

ret=t.runNextEvent()
msg=InitMsg()
flagB=0;
j=0
for i in range(1, NNODES+1):
  msg.set_b(int(B))
  msg.set_h(toth-j)
  pkt = t.newPacket();
  pkt.setData(msg.data)
  pkt.setType(msg.get_amType())
  pkt.setDestination(i)
  print "Delivering " + str(msg) + " to 0 at " + str(t.time());
  pkt.deliver(i, t.time())
  flagB=flagB+1
  if (flagB=B**j):
    j=j+1
    flagB=0

totduration=totduration-1

while(totduration>0):
  ret=t.runNextEvent()
  #if(ret):
  if(ret and 'string'.startswith(str(type(ret)))):
    print ret
  totduration=totduration-1


def closeNodes():
  for i in range(len(nodelist)):
    nodelist[i].turnOff()
closeNodes()

