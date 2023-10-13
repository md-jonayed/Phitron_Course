from users import User
import random


class Admin():
    def __init__(self) -> None:
        self.user_list = []

    def add_users(self, user):
        self.user_list.append(user)

    def create_account(self, name: str, email: str, address: str):
        self.name = name
        self.email = email
        self.address = address
        self.__balance = float(0)
        self.__ac_number = random.randint(10000000, 99999999)
        User.account_list['ac_number'] = self.__ac_number
        self.ts_history = []
        self.bank_status = True
        self.__loan = 0
        type = input("enter account type : ")
        self.ac_type = type
        amount = float(input("deposit an initial amount : "))
        self.__balance = amount+self.__balance
        self.ts_history.append(f"inital deposit {amount} taka")

    def delete_users(self, ac_num: int):
        for user in self.user_list:
            if (ac_num == user.__ac_number):
                self.user_list.remove(user)
                print(f"User {user.name} has been deleted.")
            else:
                print("User not found in the user list.")

    def see_user_account(self, name: str):
        for user in self.user_list:
            if (user.name == name):
                user.check_balance()

    def check_total_balance_of_bank(self):
        total_balance = 0
        for user in self.user_list:
            total_balance = total_balance + user.get_balance()
        print("total reserve : ", total_balance, " taka")

    def check_total_loan_of_bank(self):
        total_loan = 0
        for user in self.user_list:
            total_loan = total_loan + user.get_loan()
        print("total loan : ", total_loan, " taka")

    def disable_loan(self, name):
        for user in self.user_list:
            if (user.name == name):
                user.is_loan_enabled = False
