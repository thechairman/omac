from tinyos.tossim.TossimApp import *
from TOSSIM import *
import sys
import math

B=3
toth=4

NNODES=int((math.pow(B,toth)-1)/(B-1))
channelList=["omacapp","Boot"]
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
		nodelist[i].bootAtTime(2*t.ticksPerSecond()+(90*(i+1)))

initNodes()

parent = [1]
parent.append(2)

for i in range(1,B):
	cskipd=(1-B*math.pow(B, toth-2))/(1-B)
	r.add(int(parent[0]), int(parent[0]+(i-1)*cskipd+1), float(-55.0))
        r.add(int(parent[0]+(i-1)*cskipd+1),int(parent[0]), float(-55.0)) 
for d in range(1,toth-1):
        cskipd=(1-B*math.pow(B, toth-d-1))/(1-B)
	cskipdn=(1-B*math.pow(B, toth-d-2))/(1-B)
	if (d!=toth-1):
		for i in range(1,int(math.pow(B,d))):
                        parent.append(d+1)
			temp=parent[d-1]+(i-1)*cskipd+1
			for j in range(1,B):
                        	r.add(int(temp), int(temp+(j-1)*cskipdn+1), float(-55.0))
                        	r.add(int(temp+(j-1)*cskipdn+1),int(temp), float(-55.0))
	else:
                for i in range(1,math.pow(B,d)):
                        temp=parent[d-1]+(i-1)*cskipd+1
			for j in range(1,B):
                       		r.add(int(temp),int(temp+j), float(-55.0))
                        	r.add(int(temp+j),int(temp), float(-55.0))
                       

totduration=10000
while(totduration>0):
	ret=t.runNextEvent()
	#if(ret and 'string'.startswith(str(type(ret)))):
	if(ret):
		print ret
	totduration=totduration-1


def closeNodes():
	for i in range(len(nodelist)):
		nodelist[i].turnOff()
closeNodes()

