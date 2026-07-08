a = input().split()
n = int(a[0])
k = int(a[1])
 
b = input().split()
 
threshold = int(b[k - 1])
 
count = 0
 
for i in range(len(b)):
    if int(b[i]) >= threshold and int(b[i]) > 0:
        count += 1
 
print(count)