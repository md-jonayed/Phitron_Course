n = int(input())

l = list(map(int, input().split()))

c=0
for val in l:
    count=0
    for v in l:
        if val==v:
            count=count+1
    if val!=count:
        c=c+1

print(c)

