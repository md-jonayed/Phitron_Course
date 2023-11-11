class Person:
    name = "jonayed"
    phone = "01861469999"

    def call(self):
        print("Calling", self.name)

    def sendMessage(self, sms, phone):
        text = f"sending message to : {phone} number"
        msg = f"message : {sms}"
        print(text+" "+msg)


p1 = Person()
p1.call()
p1.sendMessage("I am jonayed, call me back", "0186146999")
