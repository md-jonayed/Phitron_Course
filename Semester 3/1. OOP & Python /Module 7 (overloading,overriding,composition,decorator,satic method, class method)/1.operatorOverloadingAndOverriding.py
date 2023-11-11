class Person:
    def __init__(self, name, age, height, weight):
        self.age = age
        self.name = name
        self.height = height
        self.weight = weight

    def eat(self):
        print("vat, ruti, mangsho")

    def exercise(self):
        raise NotImplementedError  # used to enforce derived class to implement this method


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)

    # override
    def eat(self):
        print("vegetables")

    # override
    def exercise(self):
        print("exercise daily")

    # operator overloading:
    # + overloading
    def __add__(self, other):
        return self.age + other.age

    # * overloading
    def __mul__(self, other):
        return self.age * other.age

    # len overload:
    def __len__(self):
        return self.height

    # > overloading:
    def __gt__(self, other):
        return self.age > other.age


sakib = Cricketer('Sakib', 38, 68, 91, 'bd')
mushi = Cricketer('Mushfik', 36, 65, 78, 'bd')

print(sakib + mushi)  # Output: 74
print(sakib * mushi)  # Output: 1368
print(len(sakib))      # Output: 68
print(sakib > mushi)   # Output: True
