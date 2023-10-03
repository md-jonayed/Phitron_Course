class Shopping:
    cart = []  # class attribute (static attribute)
    origin = 'china'

    def __init__(self, name, location):
        self.name = name  # instance attribute
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @staticmethod
    def multiply(a, b):
        result = a * b
        print(result)

    @classmethod
    def hudai_dekhi(cls, item):
        print(cls.origin)  # accessing class attribute using cls
        print('hudai dekhi kintu kinmu just ac er hawa khaite aschi', item)

# Creating an instance of the Shopping class
basundara = Shopping('basu en dhara', 'not popular location')

# Calling instance method purchase
basundara.purchase('lungi', 500, 1000)

# Calling class method hudai_dekhi
Shopping.hudai_dekhi('Lungi')

# Calling static method multiply
Shopping.multiply(4, 6)
