import random


class User:
    account_list = {}

    def __init__(self, name: str, email: str, address: str) -> None:
        self.name = name
        self.email = email
        self.address = address
        self.__balance = float(0)
        self.__ac_number = random.randint(10000000, 99999999)
        User.account_list['ac_number'] = self.__ac_number
        self.ts_history = []
        self.bank_status = True
        self.__loan=0
    
    def create_account(self):
        type = input("enter account type : ")
        self.ac_type = type
        amount=float(input("deposit an initial amount : "))
        self.__balance=amount+self.__balance
        self.ts_history.append(f"inital deposit {amount} taka")

    def deposit(self, amount: float):
        if (amount <= 0):
            print("deposit amount must be greater than zero")
        else:
            self.__balance = self.__balance+amount
            self.ts_history.append(f"deposited {amount} taka")

    def withdraw(self, amount: float):
        if (amount > self.__balance):
            print("withdrawal amount exceeded you balance, can not withdraw")
        elif (self.ac_type == "savings"):
            print("savings account can't withdraw untill the deadline arrive")
            pass
        elif self.bank_status == False:
            print("can't withdraw money , bank has gone bankrupted")
        else:
            self.__balance = self.__balance-amount
            self.ts_history.append(f"wihdrawn {amount} taka")

    def check_balance(self):
        print(f"name : {self.name}")
        print(f"current balance : {self.__balance} taka")
        print(f"account type : {self.ac_type}")
        print(f"transaction history : {self.ts_history}")

    def take_loan(self):
        amount=float(input("enter desired loan amount : "))
        self.__loan=amount+self.__loan
        self.ts_history.append(f"asked for loan {amount} taka")

    def transfer_balance(self, amount: float, number: int):
        for ac_number in User.account_list:
            if (ac_number == number):
                if (self.__balance >= amount):
                    print(f"{amount} taka transfer is successful")
                    self.ts_history.append(
                        f"{amount} taka is tarnsfered to this: {number}account")
                else:
                    print("balance amount exceeded")
            else:
                print(f"Account : {number} does not exist in our system")


s1 = User("jonayed", "jonayed@gmail.com", "dhaka")
# s1 = User("jonayed", "jonayed@gmail.com", "dhaka", "current")
s1.create_account()
print(s1.account_list)
s1.deposit(100)
print(s1.ts_history)
s1.withdraw(15)
print(s1.ts_history)
s1.check_balance()
s1.take_loan()