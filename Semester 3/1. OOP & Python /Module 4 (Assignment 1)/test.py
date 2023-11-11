def add(*args):
    total = 0
    for i in args:
        total=total+i
    return total

print(add(1,2,3,4,5))



def display(**kwargs):
    for key,value in kwargs.items():
        print(key,value)

display(name="Jonayed",age=25,roll=19)