testCases = input("enter testcases : ")
testCases = int(testCases)

for i in range(testCases):
    num = input()
    num = int(num)
    while num > 0:
        digits = num % 10
        print(digits, end="")
        num = num//10
    print()
