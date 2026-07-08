n = int(input())
 
count= 0 
for i in range(n) :
    string = input().split()
    
    p = int(string[0])
    v = int(string[1])
    t = int(string[2])
    if p+v+t >= 2 :
        count += 1 
print (count)