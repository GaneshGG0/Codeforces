a = input()
 
count = 0
 
for i in a:
    if i == '4' or i == '7':
        count += 1
 
if str(count) == '4' or str(count) == '7':
    print("YES")
else:
    print("NO")