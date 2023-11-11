def display_person(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")

numbers = [22, 19, 19, 14, 33]
numbers.sort()
print(numbers)