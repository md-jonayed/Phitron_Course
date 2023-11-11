class Market:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def addToCart(self, item, price, quantity):
        product = {"item ": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkOut(self, amount):
        total = 0
        for items in self.cart:
            total = total+items['price']*items['quantity']
        print(f"total charge : {total}")
        if total < amount:
            print(f'keep the change : {amount-total}')
        else:
            print(f'give extra : {total-amount}')


jonayed = Market("joonayed")
jonayed.addToCart("Watch", 1200, 4)
jonayed.addToCart("tv", 120000, 1)
jonayed.addToCart("mobile", 12000, 2)

jonayed.checkOut(1000000)
