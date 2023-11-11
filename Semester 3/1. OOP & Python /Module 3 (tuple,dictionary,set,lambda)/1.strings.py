name = "sakib\'s khan"
name2 = "sakib khan"

name3 = """
    sakib khan 
    number one
"""
print(name)
print(name3)

for char in name2:
    print(char)

print(name2[3])
print(name2[1:6])
print(name2[-3])
print(name2[::-1])

# name2[0]='R' it will raise error cause string immutable

if 'khan' in name2:
    print("true")
else:
    print("false")

print(name2.upper())

