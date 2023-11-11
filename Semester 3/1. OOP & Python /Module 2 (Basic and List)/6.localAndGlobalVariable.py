balance = 3000

def buyThings(item,price):
    global balance 
    
    balance= balance - price
    print(balance)

print(buyThings("bag",1000))