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
from django.core import validators

import re


class ContactForm(forms.Form):
    name = forms.CharField(label="Username", initial="Arslan",
                           help_text="Enter your name", required=False, disabled=True)
    file = forms.FileField()
    email = forms.EmailField(
        label="Email", widget=forms.Textarea(attrs={'id': "text_area", 'class': 'email_input_Class', 'placeholder': "Enter your email"}))
    # age = forms.IntegerField(label="Age")
    age = forms.CharField(widget=forms.NumberInput)
    height = forms.FloatField(label="Height")
    balance = forms.DecimalField(label="Amount")
    # birthday = forms.DateField(
    #     label="Birthday",
    #     widget=forms.DateInput(attrs={"type": "date"})
    # )
    birthday = forms.DateField(widget=forms.DateInput(attrs={'type': 'date'}))
    # appointment = forms.DateTimeField(
    #     label="Appointment",
    #     widget=forms.DateTimeInput(attrs={"type": "datetime-local"})
    # )
    appointment = forms.DateTimeField(
        widget=forms.DateTimeInput(attrs={'type': 'datetime-local'}), help_text="click on date time or years then press arrow keys for faster change")
    checkBox = forms.BooleanField(label="I agree", required=False)

    CHOICES = [
        ('S', "Small"),
        ('L', "Large"),
        ('XL', "Extra Large"),
        ('XXL', "Double Extra Large")
    ]
    size = forms.ChoiceField(
        label="Size", choices=CHOICES, widget=forms.RadioSelect)

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


# class StudentData(forms.Form):
#     name = forms.CharField(widget=forms.TextInput)
#     email = forms.EmailField(widget=forms.EmailInput)

    # def validateName(self):
    #     val_name = self.cleaned_data['name']
    #     if len(val_name) > 10:
    #         raise forms.ValidationError(
    #             "Enter a smaller name less then 10 characters")
    #     else:
    #         return val_name

    # def validateEmail(self):
    #     val_email = self.cleaned_data['email']

    #     if '@gmail.com' or '@yahoo.com' not in val_email:
    #         raise forms.ValidationError("enter correct email")
    #     else:
    #         return val_email

    # def clean(self):
    #     cleaned_data = super().clean()
    #     valname = cleaned_data.get('name')
    #     valemail = cleaned_data.get('email')

    #     if valname and len(valname) > 10:
    #         raise forms.ValidationError(
    #             "Name must be less than 10 characters.")

    #     if valemail and not ('@gmail.com' in valemail or '@yahoo.com' in valemail):
    #         raise forms.ValidationError(
    #             "Email must be @gmail.com or @yahoo.com")


class StudentData(forms.Form):
    name = forms.CharField(
        widget=forms.TextInput,
        validators=[
            validators.MaxLengthValidator(
                10, message="Name length should not exceed 10 characters"
            )
        ]
    )

    def length_check(value):
        if len(value) < 10:
            raise forms.ValidationError("text size must be greater than 10")

    text = forms.CharField(widget=forms.Textarea, validators=[length_check])

    email = forms.EmailField(
        widget=forms.EmailInput,
        validators=[validators.EmailValidator()]
    )

    age = forms.IntegerField(
        widget=forms.NumberInput,
        validators=[
            validators.MaxValueValidator(
                45, message="Maximum age allowed is 45"),
            validators.MinValueValidator(25, message="Minimum age must be 25")
        ]
    )

    file = forms.FileField(validators=[
        validators.FileExtensionValidator(
            allowed_extensions=['pdf', 'png'], message="file must be in pdf or png format"
        )
    ])


def passwordStrengthCheck(value):
    if len(value) < 8:
        raise forms.ValidationError(
            "Password must be at least 8 characters long.")
    if not re.search(r"[A-Z]", value):
        raise forms.ValidationError(
            "Password must include at least one uppercase letter.")
    if not re.search(r"[a-z]", value):
        raise forms.ValidationError(
            "Password must include at least one lowercase letter.")
    if not re.search(r"\d", value):
        raise forms.ValidationError(
            "Password must include at least one digit.")
    if not re.search(r"[@$%&]", value):
        raise forms.ValidationError(
            "Password must include at least one special character (@, $, %, &).")


class PasswordValidator(forms.Form):
    name = forms.CharField(
        widget=forms.TextInput,
        label="Enter your name",
        validators=[
            validators.MaxLengthValidator(
                20, message="Name should be less than 20 characters")
        ]
    )

    email = forms.EmailField(
        widget=forms.EmailInput,
        validators=[validators.EmailValidator()]
    )

    password = forms.CharField(
        widget=forms.PasswordInput,
        label="Enter your password",
        validators=[passwordStrengthCheck]
    )

    confirm_password = forms.CharField(
        widget=forms.PasswordInput,
        label="Re-enter your password"
    )

    def clean(self):
        cleaned_data = super().clean()
        password = cleaned_data.get('password')
        confirm_password = cleaned_data.get('confirm_password')

        if password and confirm_password and password != confirm_password:
            raise forms.ValidationError("Passwords do not match.")
