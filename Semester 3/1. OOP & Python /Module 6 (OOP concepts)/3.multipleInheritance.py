class Tiger:
    def __init__(self, name):
        self.name = name

    def sound(self):
        print("sounds like a tiger")


class Lion():

    def __init__(self, name):
        self.name = name

    def sound(self):
        print("sounds like a lion")


class Liger(Lion, Tiger):
    def __init__(self, name):
        super().__init__(name)

    def sound(self):
        print("sound like both")
        return super().sound()


l = Liger("liger")
l.sound()
