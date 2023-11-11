def double(num):
    return num*2


print(double(3))


def double(num): return num*2


print(double(3))


def square(num): return num**2


print(square(3))

add = lambda a,b,c : a+b+c

print(add(1,2,3))


#map 

num=[1,2,3,4,5]
print(num)
x2 = map(lambda x: x*2,num)
print(list(x2))

x3 = map(square,num)
print(list(x3))

actors=[
    {'name':'shabana','age':65},
    {'name':'shabnoor','age':45},
    {'name':'sabila','age':30},
    {'name': 'shawon', 'age': 35},

]

juniors = filter(lambda actor : actor['age']<45,actors)
print(list(juniors))

