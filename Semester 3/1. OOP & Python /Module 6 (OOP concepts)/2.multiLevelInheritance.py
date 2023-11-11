class Vehicle:
    def __init__(self,name,wheel):
        self.name=name
        self.wheel=wheel
    
    def size(self):
        print("give size")

class Bus(Vehicle):
    def __init__(self, name, wheel,seatNo):
        self.seatNo=seatNo
        super().__init__(name, wheel)
    
    def size(self):
        return super().size()

class ACBus(Bus):
    def __init__(self, name, wheel, seatNo,temperature):
        self.temparature=temperature
        super().__init__(name, wheel, seatNo)
    def __repr__(self) -> str:
        return f'{self.name} {self.seatNo}'
hanif = ACBus("hanif",4,42,18)
print(hanif)
