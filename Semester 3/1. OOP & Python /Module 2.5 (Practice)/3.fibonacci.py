num = int(input())

l = [0,1]
for i in range(num):
    if i == 0 :
        print(l[i],end=" ")
    elif i==1:
        print(l[i], end=" ")
    else:
        l.append(l[i-1]+l[i-2])
        print(l[i], end=" ")
