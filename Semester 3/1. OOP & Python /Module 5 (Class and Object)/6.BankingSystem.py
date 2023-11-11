class Bank:
    def __init__(self,name):
        self.name=name
        self.balance = 0
    
    def deposit(self,amount):
        self.balance=self.balance+amount
        print(f"You deposited : {amount} and current balance is :  {self.balance}")

    def withdraw(self,amount):
        try:
            if(amount>100):
                self.balance=self.balance-amount
                print(f"money withdrawn {amount}")
                print(f"current balance : {self.balance}")
        except:
            print("cant with draw amount less than 100 taka")
    

brac = Bank("Jonayed")
brac.deposit(10000)
brac.deposit(2000)
brac.withdraw(4000)