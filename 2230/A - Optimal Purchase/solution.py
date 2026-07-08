t = int(input())
 
for i in range(t):
    x = input().split()
 
    n = int(x[0])
    a = int(x[1])
    b = int(x[2])
 
    cost1 = n * a
 
    cost2 = (n // 3) * b + (n % 3) * a
 
    cost3 = ((n + 2) // 3) * b
 
    print(min(cost1, cost2, cost3))