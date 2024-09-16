from collections import deque
d=deque()
n=int(input())
while(n>0):
    cmd=input().split()
    if(cmd[0]=="append"):
        d.append(int(cmd[1]))
    elif(cmd[0]=="appendleft"):
        d.appendleft(int(cmd[1]))
    elif(cmd[0]=="clear"):
        d.clear()
    elif(cmd[0]=="extend"):
        d.extend(cmd[1:])
    elif(cmd[0]=="extendleft"):
        d.extendleft(cmd[1])
    elif(cmd[0] == "count"):
        print(d.count(int(cmd[1])))
    elif(cmd[0]=="pop"):
        d.pop()
    elif(cmd[0]=="popleft"):
        d.popleft()
    elif(cmd[0]=="remove"):
        d.remove(int(cmd[1]))
    elif(cmd[0]=="reverse"):
        d.reverse()
    elif(cmd[0] == "rotate"):
        d.rotate(int(cmd[1]))
    n -= 1

for _ in d:
    print(_, end=" ")
