n = int(input())

digit = int(input())
sumOfDigits = 0
while digit > 0:
    sumOfDigits = sumOfDigits + digit % 10
    digit = digit//10
print(sumOfDigits)
