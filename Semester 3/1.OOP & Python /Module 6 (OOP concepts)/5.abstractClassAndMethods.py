from abc import ABC, abstractclassmethod


class Animal(ABC):
    @abstractclassmethod
    def eat(self):
        pass


class Lion(Animal):
    def sound(self):
        print("roars")
    def eat(self):
        print("meat")


lion = Lion()
lion.sound()
lion.eat()
