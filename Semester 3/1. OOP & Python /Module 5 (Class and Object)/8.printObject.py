class Student:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll

    def __repr__(self) -> str:
        return f"{self.name}, {self.roll}"


jonayed = Student("Jonayed", 19)
print(jonayed)
