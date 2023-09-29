count = 0
number = int(input())

num = list(map(int, input().split()))

flag = 0
while True:
    flag = 0
    for i in range(number):
        if num[i] % 2 == 0:
            num[i] = num[i] // 2
        else:
            flag = 1
            break
    if flag == 0:
        count += 1
    else:
        break

print(count)

# # Read input N
# N = int(input())

# # Read array A
# A = list(map(int, input().split()))

# # Function to check if all numbers are even
# def all_even(arr):
#     for num in arr:
#         if num % 2 != 0:
#             return False
#     return True

# # Count the number of operations
# operations = 0

# # Perform operations while all numbers are even
# while all_even(A):
#     A = [num // 2 for num in A]
#     operations += 1

# # Print the number of operations
# print(operations)
