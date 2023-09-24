def fullName(first,last):
    name = f"{first} {last}"
    return name

name = fullName("Mohammad","jonayed")
print(name)

name = fullName(last="Mohammad", first="jonayed")
print(name)


def famousNmae(first,last,**additional):
    name = f'{first} {last}'
    for key,value in additional.items():
        print(key,value)
    return name

print(famousNmae(first="Mohammad",last="Jonayed",nickname="Jono",surname="Sarkar"))
