from tinyos.tossim.TossimApp import *
from TOSSIM import *
import sys
import math

B=3
toth=4

NNODES=int((math.pow(B,toth)-1)/(B-1))
channelList=["omacapp","Boot", "AM"]#,"TossimPacketModelC", "Queue", "Tossim"]
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

initNodes()

parent = [1]
parent.append(2)

f = open("topo.txt", "r")

lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    print " ", s[0], " ", s[1], " ", s[2];
    r.add(int(s[0]), int(s[1]), float(s[2]))

last=(1-B*math.pow(B, toth-1))/(1-B)       
noise = open("meyer-heavy.txt", "r")
lines = noise.readlines()
for line in lines:
	str1 = line.strip()
	if (str1 != ""):
    		val = int(str1)
    		for i in range(1, last):
      			t.getNode(i).addNoiseTraceReading(val)

for i in range(1, last):
  	print "Creating noise model for ",i;
  	t.getNode(i).createNoiseModel()

totduration=155555
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

