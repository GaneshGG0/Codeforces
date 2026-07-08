a = input()
s=[]
for i in a:
    if i not in s:
        s.append(i)
    else :
        pass
if (len(s)) %2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")