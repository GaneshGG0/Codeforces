X = int(input())
count = 0
for i in range (0,X,1) : 
    y = input()
    if y == 'X++' or y == '++X' : 
        count += 1 
    elif y == 'X--' or y == '--X' :
        count -= 1
    else :
        pass
print (count)