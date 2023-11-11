import math


class Shape:
    def __init__(self, name):
        self.name = name

    def area(self):
        print("calculate area of a certain shape")


class Circle(Shape):
    def __init__(self, name):
        super().__init__(name)

    def area(self, radious):
        print(2*math.pi*radious)


s1 = Circle("circle")
s1.area(2)
