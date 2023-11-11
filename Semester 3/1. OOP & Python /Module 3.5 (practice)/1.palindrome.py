
n = int(input())
arr = input().split()


for i in range(n):
    arr[i] = int(arr[i])


is_palindrome = True

for i in range(n // 2):
    if arr[i] != arr[n - 1 - i]:
        is_palindrome = False
        break

if is_palindrome:
    print("YES")
else:
    print("NO")
