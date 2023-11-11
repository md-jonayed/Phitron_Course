from bank import BankAccount


class Admin:
    users = []
    authorizationCode = int(1234)

    def create_account(self, name, email, address, account_type, pin):
        user = BankAccount(name, email, address, account_type, pin)
        user.loan_enable = True
        Admin.users.append(user)

    def add_users(self, user: object):
        Admin.users.append(user)

    def delete_account(self, account_number):
        for account in Admin.users:
            if account.account_number == account_number:
                self.users.remove(account)
                print(
                    f"Account under name : {account.name} ( {account_number} ) is deleted")
            else:
                print("Account not found")
                return

    def see_account_list(self):
        for user in self.users:
            print(
                f"user name : {user.name}\nuser email address : {user.email}\nuser address : {user.address}")

    def check_total_balance(self):
        total_balance = 0
        for user in self.users:
            total_balance = total_balance + user.balance
        print("total balance is : ", total_balance)

    def check_total_loan_amount(self):
        total_loan = 0
        for user in self.users:
            total_loan = total_loan + user.loan
        print("total loan is : ", total_loan)

    def toggle_loan_feature(self, status, name):
        if status == 'on':
            for account in Admin.users:
                if account.name==name:
                    print("current statues: laon feature enabled")
                    account.loan_enabled = True
                    break
        else:
            for account in Admin.users:
                if account.name==name:
                    print("current statues: laon feature disabled")
                    account.loan_enabled = False
                    break
            
            
            
