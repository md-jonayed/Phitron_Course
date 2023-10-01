class Shopping:
    
    def __init__(self,name):
        self.name=name
        self.cart=[]
    def addToCart(self,item):
        self.cart.append(item)
        print(self.cart)


jonayed = Shopping("jonayed")
jonayed.addToCart("Iphone")
jonayed.addToCart("Backpack")

sarkar = Shopping("Sarkar")
sarkar.addToCart("T shirt")

# here cart is a instance attribute so it is storing different values for different instance of objects