class People:
    def __init__(self, name, address):
        self.name = name
        self.id = {}
        self.address = address

    def createAccount(self, email, password):
        self.id = {email: password}

    def addProducts(self):
        self.products = []

    def showProducts(self):
        for product in self.products:
            print(product)


class Customer(People):
    def __init__(self, name, address):
        super().__init__(name, address)

    def createAccount(self, email, password):
        return super().createAccount(email, password)


class Seller(People):
    def __init__(self, name, address):
        super().__init__(name, address)

    def createAccount(self, email, password):
        return super().createAccount(email, password)

    def addProducts(self, product, price, quantity):
        t = (product, price, quantity)
        self.products.append(t)


while True:
    print("type \"C\" if you are a customer")
    print("type \"S\" if you are a seller")
    people = input()
    if (people == 'C'):
        c1 = Customer(name=input("enter customer name : "),
                      address=input("enter customer's address : "))
        print("if you want to create an account press yes else no")
        yesOrNo = input()
        if (yesOrNo == "yes"):
            c1.createAccount(email=input("enter email : "),
                             password=input("enter password : "))
        else:
            c1.products()
    if (people == 'S'):
        s1 = Seller(name=input("enter seller name : "),
                    address=input("enter seller address : "))
        print("if you want to create an account press yes else no")
        yesOrNo = input()
        if (yesOrNo == "yes"):
            s1.createAccount(email=input("enter email : "),
                             password=input("enter password : "))
        print("if you have an account you can sell product (yes or no)")
        haveAccount = input()
        if (haveAccount == "yes"):
            totalItem = int(input("enter how many items you want to sell : "))
            for i in range(totalItem):
                s1.addProducts(product=input("enter product name : "), price=int(
                    input("enter price for each unit : ")), quantity=int(input("enter quantity : ")))
        else:
            pass
    else:
        break
