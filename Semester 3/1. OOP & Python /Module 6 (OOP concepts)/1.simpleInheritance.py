class Car:
    def __init__(self,brand,serial) :
        self.brand=brand
        self.serial=serial
    
    def honk(self):
        print("car is honking")


class Toyota(Car):
    def __init__(self, brand, serial,model):
        self.model=model
        super().__init__(brand, serial)

    def honk(self):
        return super().honk()
    

car1 = Toyota("Toyota",1,"s")
car1.honk()