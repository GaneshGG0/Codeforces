t = int(input())
for _ in range(t):
    n, c = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    INF = 10 ** 18
    A = INF
    ok = True
    C = 0
    for i in range(n):
        if a[i] < b[i]:
            ok = False
            break
        C += a[i] - b[i]
    if ok:
        A = min(A, C)
    sa = sorted(a)
    sb = sorted(b)
    ok = True
    C = c
    for i in range(n):
        if sa[i] < sb[i]:
            ok = False
            break
        C += sa[i] - sb[i]
    if ok:
        A = min(A, C)
 
    if A == INF:
        print(-1)
    else:
        print(A)