def multiple():
    return 2, 3


print(multiple())

things = (1, 2, 3, 'a', 'v', 'r')
print(things)

things = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
print(type(things))
print(things[0])

print(things[-2])
print(things[3:6])

# things[0]='name'      this will raise error cause touples are immutable
print(len(things))

mega = ([1, 2, 3], [4, 5, 6])
print(mega[0])

mega[0][1] = 66
print(mega)

for items in things:
    print(items)
