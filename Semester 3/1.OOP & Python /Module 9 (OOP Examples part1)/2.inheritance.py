# Python Inheritance
# Inheritance allows us to define a class that inherits all the methods and properties from another class.

# Parent class is the class being inherited from, also called base class.

# Child class is the class that inherits from another class, also called derived class.

# Create a Parent Class
# Any class can be a parent class, so the syntax is the same as creating any other class:

class Person:
    def __init__(this, firstName, lastName):
        this.firstName = firstName
        this.lastName = lastName

    def printName(this):
        print(f"{this.firstName} {this.lastName}")


jonayed = Person("Md Jonayed", "Sarkar")
jonayed.printName()

# Create a Child Class
# To create a class that inherits the functionality from another class, send the parent class as a parameter when creating the child class:


class Student(Person):
    pass


s1 = Student("Jonayed", "sarkar")
s1.printName()

# Add the __init__() Function
# So far we have created a child class that inherits the properties and methods from its parent.

# We want to add the __init__() function to the child class (instead of the pass keyword).

# Note: The __init__() function is called automatically every time the class is being used to create a new object.


class Student(Person):
    def __init__(this, firstName, lastName):
        super.__init__(firstName, lastName)


# When you add the __init__() function, the child class will no longer inherit the parent's __init__() function.

# Note: The child's __init__() function overrides the inheritance of the parent's __init__() function.

# To keep the inheritance of the parent's __init__() function, add a call to the parent's __init__() function:
# By using the super() function, you do not have to use the name of the parent element, it will automatically inherit the methods and properties from its parent.

# Add a property called graduationyear to the Student class:

class Student(Person):
    def __init__(this, firstName, lastName):
        super().__init__(firstName, lastName)
        this.graduationYear = 2023


s1 = Student("Jonayed", "Sarkar")
print(s1.graduationYear)

# In the example below, the year 2019 should be a variable, and passed into the Student class when creating student objects. To do so, add another parameter in the __init__() function:


class Student(Person):
    def __init__(this, firstName, lastName, graduationYear):
        super().__init__(firstName, lastName)
        this.graduationYear = graduationYear

    def __str__(this) -> str:
        return f"{this.firstName} {this.lastName} {this.graduationYear}"
    # Add a method called welcome to the Student class:

    def welcome(this):
        print(
            f"welcome {this.firstName} {this.lastName}  to the class of {this.graduationYear} ")


s1 = Student("Jonayed", "sarkar", 2023)
print(s1)
s1.welcome()

# If you add a method in the child class with the same name as a function in the parent class, the inheritance of the parent method will be overridden.


class Student(Person):
    def __init__(this, firstName, lastName, graduationYear):
        super().__init__(firstName, lastName)
        this.graduationYear = graduationYear

    def printName(this):
        print(f"{this.firstName} {this.lastName} {this.graduationYear}")


s1 = Student("MD Jonayed", "Sarkar", "2023")
s1.printName()
