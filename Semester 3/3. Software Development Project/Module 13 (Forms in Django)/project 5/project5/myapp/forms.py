# from django import forms


# class ContactForm(forms.Form):
#     name = forms.CharField(label="Username")
#     email = forms.EmailField(label="Email")
#     age = forms.IntegerField(label="age")
#     height = forms.FloatField(label="height")
#     balance = forms.DecimalField(label="amount")
#     birthday = forms.DateField()

#     appointment = forms.DateTimeField()
#     checkBox = forms.BooleanField()

#     CHOICES = [('S', "Small"), ('L', "Large"),
#                ('XL', "Extra Large"), ('XXL', "Double Extra Large")]

#     size = forms.ChoiceField(choices=CHOICES)

#     TOPPINGS = [('B', 'BEEF'), ('C', "Chicken"),
#                 ("V", "Vegetables"), ("Ch", "Cheese")]

#     pizza = forms.MultipleChoiceField(choices=TOPPINGS)

from django import forms


class ContactForm(forms.Form):
    name = forms.CharField(label="Username")
    file = forms.FileField()
    email = forms.EmailField(label="Email")
    age = forms.IntegerField(label="Age")
    height = forms.FloatField(label="Height")
    balance = forms.DecimalField(label="Amount")

    birthday = forms.DateField(
        label="Birthday",
        widget=forms.DateInput(attrs={"type": "date"})
    )

    appointment = forms.DateTimeField(
        label="Appointment",
        widget=forms.DateTimeInput(attrs={"type": "datetime-local"})
    )

    checkBox = forms.BooleanField(label="I agree", required=False)

    CHOICES = [
        ('S', "Small"),
        ('L', "Large"),
        ('XL', "Extra Large"),
        ('XXL', "Double Extra Large")
    ]
    size = forms.ChoiceField(label="Size", choices=CHOICES)

    TOPPINGS = [
        ('B', 'Beef'),
        ('C', "Chicken"),
        ("V", "Vegetables"),
        ("Ch", "Cheese")
    ]
    pizza = forms.MultipleChoiceField(
        label="Pizza Toppings",
        choices=TOPPINGS,
        widget=forms.CheckboxSelectMultiple
    )
