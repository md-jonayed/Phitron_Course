from admin import Admin
from bank import BankAccount
import random

while True:
    print("<-------------------------Welcome to JBL system----------------------->")
    choice = input("* Login 'l' / register 'r' / leave 'b' : ")
    if (choice == 'l'):
        person = input("* enter as a user 'u' or admin 'a' :")
        if (person == 'u'):
            name = input("enter your name :  ")
            email = input("enter your email : ")
            user = None
            for account in Admin.users:
                if (name == account.name and email == account.email):
                    print("logged in as user : ", name)
                    user = account
                    break
            while True:
                print("\nOptions:")
                print("1. Deposit")
                print("2. Withdraw")
                print("3. Check Balance")
                print("4. Take Loan")
                print("5. Transfer")
                print("6. View Transaction History")
                print("0. Logout")
                try:
                    option = int(input("enter option : "))
                    if (option == 1):
                        user.deposit(amount=float(input("enter  amount : ")))
                    elif option == 2:
                        user.withdraw(amount=float(input("enter  amount : ")))
                    elif option == 3:
                        user.check_balance()
                    elif option == 4:
                        user.take_loan(amount=float(input("enter amount : ")))
                    elif option == 5:
                        name = input("enter name : ")
                        amount = float(input("enter amount : "))
                        for account in Admin.users:
                            if account.name == name:
                                user.transfer(account, amount)
                                break
                        else:
                            print("No such user found")

                    elif option == 6:
                        user.check_transaction_history()
                    elif option == 0:
                        break
                    else:
                        print(
                            "Invalid option. Please enter a number between 0 and 6.")
                except ValueError:
                    print("Invalid input. Please enter a valid number.")

        if (person == 'a'):
            name = input("enter your name :  ")
            email = input("enter your email : ")
            admin_pin = int(input("enter admin authorized pin : "))

            for account in Admin.users:
                if (name == account.name and email == account.email and admin_pin == Admin.authorizationCode):
                    print("logged in as admin : ", name)
                    admin = Admin()
                    break
            while True:
                print("\nAdmin Options:")
                print("1. Create Account")
                print("2. Delete Account")
                print("3. See Account List")
                print("4. Check Total Balance")
                print("5. Check Total Loan")
                print("6. Toggle Loan Feature")
                print("0. Logout")
                try:
                    option = int(input("enter option : "))
                    if (option == 1):
                        name = input("enter name : ")
                        email = input("enter email : ")
                        address = input("enter address : ")
                        ac_type = input("enter account type : ")
                        pin = input("enter your pin : ")
                        admin = Admin()
                        admin.create_account(
                            name, email, address, ac_type, pin)
                    elif option == 2:

                        admin.delete_account(
                            account_number=input("enter account number : "))
                    elif option == 3:
                        for users in Admin.users:
                            print(users.name)
                            print(users.email)
                            print(users.address)
                            print('\n')
                    elif option == 4:

                        admin.check_total_balance()
                    elif option == 5:

                        admin.check_total_loan_amount()
                    elif option == 6:
                        admin.toggle_loan_feature(
                            status=input("enter on or off : "), name=input("enter name : "))
                    elif option == 0:
                        break
                except ValueError:
                    print("Invalid input. Please enter a valid number.")

    elif (choice == 'r'):
        person = input("* register as a user 'u' or admin 'a' :")
        if person == 'u':
            name = input("enter name : ")
            email = input("enter email : ")
            address = input("enter address : ")
            ac_type = input("enter account type : ")
            pin = input("enter your pin : ")
            user = BankAccount(name, email, address, ac_type, pin)
            Admin.users.append(user)
            print("account number : ", user.account_number)
            print("account creation successful for further opeartion login again")
        elif person == 'a':
            name = input("enter name : ")
            email = input("enter email : ")
            address = input("enter address : ")
            ac_type = input("enter account type : ")
            pin = input("enter your pin : ")
            admin = Admin()
            admin.create_account(name, email, address, ac_type, pin)
            print("account creation successful for further opeartion login again")
    elif (choice == 'b'):
        break
