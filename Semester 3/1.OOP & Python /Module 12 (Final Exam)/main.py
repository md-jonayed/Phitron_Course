from users import User
from admin import Admin
# admin = Admin()

# s1 = User("Jonayed", "jonayed@gmail.com", "dhaka")
# s2 = User("Mohammad", "mohammad@gmail.com", "dhaka")


# admin.add_users(s1)
# admin.add_users(s2)
# admin.disable_loan("Jonayed")
# s1.create_account()
# s2.create_account()
# s1.deposit(2000)
# s2.deposit(2000)
# s1.take_loan()
# s2.take_loan()

# admin.see_user_account("Jonayed")
# admin.check_total_balance_of_bank()
# admin.check_total_loan_of_bank()
while (True):
    print("enter admin or user")
    x = input()
    if (x == 'user'):
        print("press 1 to create an account ")
        print("press 2 to deposit money ")
        print("press 3 to withdraw money ")
        print("press 4 to check balance ")
        print("press 5 to take a loan ")
        key = int(input("enter your choice : "))
        if (key == 1):
            newAccount = User(name=input("enter name : "), email=input(
                "enter email : "), address=input("enter address : "))
            newAccount.create_account()

        elif (key == 2):
            newAccount.deposit(amount=float(input("enter amount : ")))
        elif (key == 3):
            newAccount.withdraw(amount=float(input("enter amount : ")))
        elif (key == 4):
            newAccount.check_balance()
        elif (key == 5):
            newAccount.take_loan()
        elif (key == 0):
            break
        else:
            print("enter valid key")
    elif (x == 'admin'):
        print("press 1 to create an account ")
        print("press 2 to delete account  ")
        print("press 3 to see user account ")
        print("press 4 to check total available balance ")
        print("press 5 to check total loan ")
        print("press 6 to disable loan feature ")
        key = int(input("enter your choice : "))
        if (key == 1):
            admin = Admin()
            admin.add_users(user=newAccount)
            admin.create_account(name=input("enter name : "), email=input(
                "enter email : "), address=input("enter address : "))

        elif (key == 2):
            admin.delete_users(ac_num=int(input("enter account number : ")))
        elif (key == 3):
            admin.see_user_account(name=input("enter user name : "))
        elif (key == 4):
            admin.check_total_balance_of_bank()
        elif (key == 5):
            admin.check_total_loan_of_bank()
        elif (key == 6):
            admin.disable_loan(name="enter user name : ")
        elif (key == 0):
            break
        else:
            print("enter valid key")

    else:
        break
