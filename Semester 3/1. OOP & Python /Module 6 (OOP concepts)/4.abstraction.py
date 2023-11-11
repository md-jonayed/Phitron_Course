class Bank:
    def __init__(self, holder_name, initial_deposit, branch):
        self.holder_name = holder_name
        self.__balance = initial_deposit
        self._branch = branch

    def getBalance(self):
        return self.__balance

    def deposit(self, amount):
        print("deposited : ", amount)
        self.__balance += amount
        print("Current balance : ", self.__balance)


j = Bank("Jonayed", 100000, "kalabagan")
j.__balance = 100
print(j.getBalance())
j.deposit(350)
print(j.getBalance())
print(dir(j))
print(j._Bank__balance)     # accessing a private variable
