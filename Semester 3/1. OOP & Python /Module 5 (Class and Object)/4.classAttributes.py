class Shopping:
    cart = []

    def __init__(self, name):
        self.name = name

    def addToCart(self, item):
        self.cart.append(item)
        print(self.cart)


jonayed = Shopping("jonayed")
jonayed.addToCart("Iphone")
jonayed.addToCart("Backpack")

sarkar = Shopping("Sarkar")
sarkar.addToCart("T shirt")

# here cart is a class attribute so it is storing all instances record inside it
