for i in range(5):
    row = input().split()
 
    if "1" in row:
        r = i + 1
        c = row.index("1") + 1
 
ans = abs(r - 3) + abs(c - 3)
print(ans)