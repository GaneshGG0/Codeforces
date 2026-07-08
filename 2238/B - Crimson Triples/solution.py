a = int(input())
T = [int(input()) for i in range(a)]
A = []
for n in T:
    cur = 0
    for b in range(1, n + 1):
        x = n // b
        cur += x * x
    A.append(cur)
print(*A, sep="
")