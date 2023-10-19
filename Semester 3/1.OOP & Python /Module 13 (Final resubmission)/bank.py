import random


class BankAccount:
    def __init__(self, name, email, address, account_type, pin):
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
        self.pin = pin
        self.balance = 0
        self.account_number = random.randint(100000, 999999)
        self.loan_taken = 0
        self.loan = 0
        self.transaction_history = []
        self.loan_enable = True

    def deposit(self, amount: float):
        self.balance = self.balance + amount
        self.transaction_history.append(f"Deposited: {amount}")
        print("deposited : ", amount, " taka")

    def withdraw(self, amount: float):
        if amount > self.balance:
            print("Withdrawal amount exceeded")
        else:
            self.balance = self.balance - amount
            self.transaction_history.append(f"Withdrawn: {amount}")
            print(amount, " taka Withdrawal successful")

    def check_balance(self):
        print(f"Available balance: {self.balance}")

    def check_transaction_history(self):
        print(self.transaction_history)

    def take_loan(self, amount: float):
        if self.loan_taken <= 1 and self.loan_enable:
            self.balance = self.balance + amount
            self.loan_taken = self.loan_taken + 1
            self.loan = self.loan + amount
            self.transaction_history.append(f"Loan taken: {amount}")
            print(f"Loan of {amount} granted. Current balance: {self.balance}")
        else:
            self.loan_enable = False
            print("Loan limit exceeded")

    def transfer(self, recipient: object, amount: float):
        if recipient is None:
            print("Account does not exist")
            return
        if amount > self.balance:
            print("insufficient balance ")
            return
        self.balance = self.balance - amount
        recipient.balance = recipient.balance + amount
        self.transaction_history.append(
            f"Transferred {amount} to {recipient.name}, account number : {recipient.account_number}")
        recipient.transaction_history.append(
            f"Received {amount} from : {self.name},  account number : {self.account_number}")
        print("Transfer successful")
