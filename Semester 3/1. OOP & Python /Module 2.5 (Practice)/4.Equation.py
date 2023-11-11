def series_sum(x, n):
    sum = 0
    for i in range(2, n + 1, 2):
        mul = 1
        if i % 2 == 0:
            for j in range(i):
                mul *= x
        sum += mul
    return sum

x = int(input())
n=int(input())
result = series_sum(x, n)
print(result)
