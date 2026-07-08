a=input().split()
limak = int(a[0])
bob = int(a[1])
counter = 0
while limak <= bob:
    limak *= 3
    bob *= 2
    counter += 1
print(counter)