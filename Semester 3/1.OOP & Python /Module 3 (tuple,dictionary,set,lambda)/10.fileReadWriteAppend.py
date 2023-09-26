# with open('msg.txt','w') as file:
#     file.write("I am jonayed")

# with open('msg.txt','a') as file:
#     file.write("I am a CSE graduate")

with open('msg.txt','r') as file:
    text = file.read()
    print(text)