a = int(input())
b = input()
countA = 0
countD = 0
for i in range(len(b)) :
    if b[i] == 'A' :
        countA += 1
    elif b[i] == 'D' :
        countD += 1
    else :
        pass
 
 
if countA > countD :
    print("Anton")
elif countD > countA :
    print("Danik")
else :
    print("Friendship")