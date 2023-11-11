class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def information(self):
        print(f"person name : {self.name}, person age : {self.age}")


person1 = Person("Jonayed", age=25)
person1.information()
