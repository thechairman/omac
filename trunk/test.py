from tinyos.tossim.TossimApp import *
from InitMsg import *
from TOSSIM import *
import sys
import math

#calculate preamble length
#T=300.0
B=2.0
toth=4
NNODES=int(((B**toth)-1)/(B-1))

Perc=0.2



#begin configuration
channelList=["omacapp","Boot","LPL"]#, "AM","TossimPacketModelC", "Queue", "Tossim"]
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
#  for i in range(NNODES):
#    nodelist[i]=t.getNode(i+1)
#    nodelist[i].bootAtTime(2*t.ticksPerSecond()+(90*(i+1) + 2 << i))
  i=0
  for h in range(toth):
    for j in range(int(B**h)):
      nodelist[i]=t.getNode(h*64+j+1)
      i=i+1
   
  for i in range(NNODES):
    nodelist[i].bootAtTime(2*t.ticksPerSecond()+(93*(i+1)))
#    v=nodelist[i].getVariable("OMACC.a")
#    v.setData(100)
#    print v.getData()


initNodes()

f = open("newtopo.txt", "r")
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
    #for i in range(1, NNODES+1):
      #t.getNode(i).addNoiseTraceReading(val)
    for h in range(toth):
      for j in range(int(B**h)):
        t.getNode(h*64+j+1).addNoiseTraceReading(val)
        

for h in range(toth):
  for j in range(int(B**h)):
    print "Creating noise model for ",h*64+j+1
    t.getNode(h*64+j+1).createNoiseModel()

#for i in range(1, NNODES+1):
#  print "Creating noise model for ",i;
#  t.getNode(i).createNoiseModel()

totduration=3600.0

#ret=t.runNextEvent()
#msg=InitMsg()
#flagB=0;
#j=0
#for i in range(1, NNODES+1):
#  msg.set_b(int(B))
#  msg.set_h(toth-j)
#  pkt = t.newPacket();
#  pkt.setData(msg.data)
#  pkt.setType(msg.get_amType())
#  pkt.setDestination(i)
#  print "Delivering " + str(msg) + " to 0 at " + str(t.time());
#  pkt.deliver(i, t.time())
#  flagB=flagB+1
#  if (flagB=B**j):
#    j=j+1
#    flagB=0



starttime = t.time()
duration = 0.0
while(duration < totduration):
  ret=t.runNextEvent()
  #if(ret):
  if(ret and 'string'.startswith(str(type(ret)))):
    print ret
  endtime = t.time()
  duration = (endtime - starttime)/t.ticksPerSecond()


def closeNodes():
  for i in range(len(nodelist)):
    nodelist[i].turnOff()
closeNodes()

