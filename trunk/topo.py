toth = 4
B = 3
n = 1
gain = -55

print "h: " + str(0) + "\n"
print " node id= " + str(n) + "\n"
 
for i in range(1,toth):
  print "h: " + str(i) + "\n"
  t = 0
  for j in range(B * n):
    print "j: " + str(j) + " node id= " + str(i * 64 + j + 1) + "\n"
    t = t + 1
  n = t

ftopo = open("newtopo.txt", "w")
n = 1
for i in range(1,toth):
  t = 0
  for j in range(B * n):
    # parent-child link
    ftopo.write(str((i-1) * 64 + int(j/B) + 1) + " " + str(i * 64 + j + 1) + " " + str(gain) + "\n")
    ftopo.write(str(i * 64 + j + 1) + " " + str((i-1) * 64 + int(j/B) + 1) + " " + str(gain) + "\n")
    # links between siblings
    for k in range(1,B):
      if(((j+k) > j) and (((j+k) % B) > (j % B))):
        ftopo.write(str(i * 64 + j+1) + " " + str(i * 64 + j + k + 1) + " " + str(gain) + "\n")
        ftopo.write(str(i * 64 + j + k + 1) + " " + str(i * 64 + j+1) + " " + str(gain) + "\n")
    t = t + 1
  n = t


ftopo.close()

