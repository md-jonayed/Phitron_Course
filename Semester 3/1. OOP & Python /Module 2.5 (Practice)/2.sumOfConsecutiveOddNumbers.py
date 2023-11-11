testcases = int(input())

for i in range(testcases):
    num1=int(input())
    num2 = int(input())
    mn = min(num1,num2)
    mx = max(num1,num2)
    total=0
    for j in range(mn+1,mx):
        if j%2==1:
            total=total+j
    print(total)
