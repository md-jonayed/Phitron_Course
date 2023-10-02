class Product:
    def __init__(self):

        self.products = []


class Shop(Product):
    def __init__(self):
        super().__init__()
    def addProduct(self, product):
        self.products.append(product)

    def productList(self):
        for product in self.products:
            print(product)

    def buyProducts(self, product):
        if product in self.products:
            print("Congrats")
        else:
            print(f"sorry {product} is not available")


a = Shop()
a.addProduct("apple")
a.addProduct("mango")
a.addProduct("sugercane")
a.addProduct("pineapple")

a.productList()

a.buyProducts("Guava")
a.buyProducts("mango")
