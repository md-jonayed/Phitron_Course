class Person:
    def __init__(this, name, age) -> None:
        this.name = name
        this.age = age
# __str__function is used for printing directly the object 
    def __str__(this):
        return f"{this.name},{this.age}"
# created a method inside class
    def myFunc(this):
        return print(f"Hi, how are you {this.name}")

#creating an object
p1 = Person("jonayed", 25)
#to delete an object's attribute
# del p1.name
print(p1.name)
#assigning a value into an object attribute or variable 
p1.age=40

print(p1.age)
print(p1)
#calling a function using the object of that class
p1.myFunc()

# we can even delete an object
# del p1
print(p1)

# class definitions cannot be empty, but if you for some reason have a class definition with no content, put in the pass statement to avoid getting an error.

class Man:
    pass
