num = [1, 2, 3, 4, 5]

odds = []

for i in num:
    if i % 2 != 0:
        odds.append(i)
print(odds)

odds_nums = [i for i in num if i % 2 == 0 and i > 2]
print(odds_nums)
