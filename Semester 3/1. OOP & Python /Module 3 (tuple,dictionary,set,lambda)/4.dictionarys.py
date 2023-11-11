person = {'name': 'jonayed', 'age': '25', 'address': 'cumilla'}
print(person)

print(person.keys())
print(person.values())

person['address'] = 'dhaka'
print(person)
person['language'] = 'bangla'
print(person)

for key, value in person.items():
    print(key, " = ", value)
