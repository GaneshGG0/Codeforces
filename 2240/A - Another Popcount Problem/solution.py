import sys
input = sys.stdin.readline
a = int(input())
j = [tuple(map(int, input().split())) for _ in range(a)]
w = []
for n, k in j:
    r = 0
    c = 1
    while c <= n:
        take = min(k, n // c)
        r += take
        n -= take * c
        if take < k:
            break
        c <<= 1
    w.append(str(r))
print("
".join(w))