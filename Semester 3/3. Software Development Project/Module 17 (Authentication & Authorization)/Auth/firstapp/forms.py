from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from django import forms


class RegisterForm(UserCreationForm):
    first_name = forms.CharField(
        required=True,
        widget=forms.TextInput(
            attrs={'class': 'form-control', 'placeholder': 'First Name'})
    )
    last_name = forms.CharField(
        required=True,
        widget=forms.TextInput(
            attrs={'class': 'form-control', 'placeholder': 'Last Name'})
    )
    email = forms.EmailField(
        required=True,
        widget=forms.EmailInput(
            attrs={'class': 'form-control', 'placeholder': 'Email Address'})
    )

    class Meta:
        model = User
        # fields = '__all__'
        fields = ['username', 'first_name', 'last_name', 'email']

# from django.contrib.auth.models import User
# from django.contrib.auth.forms import UserCreationForm
# from django import forms


# class RegisterForm(UserCreationForm):
#     first_name = forms.CharField(
#         max_length=30,
#         required=True,
#         widget=forms.TextInput(attrs={
#             'class': 'form-control',
#             'placeholder': 'First Name'
#         })
#     )
#     last_name = forms.CharField(
#         max_length=30,
#         required=True,
#         widget=forms.TextInput(attrs={
#             'class': 'form-control',
#             'placeholder': 'Last Name'
#         })
#     )
#     email = forms.EmailField(
#         required=True,
#         widget=forms.EmailInput(attrs={
#             'class': 'form-control',
#             'placeholder': 'Email Address'
#         })
#     )

#     class Meta:
#         model = User
#         fields = ['username', 'first_name', 'last_name',
#                   'email', 'password1', 'password2']

    # def __init__(self, *args, **kwargs):
    #     super().__init__(*args, **kwargs)
    #     for field_name in self.fields:
    #         field = self.fields[field_name]
    #         field.widget.attrs['class'] = 'form-control'
    #         field.widget.attrs['placeholder'] = field.label


class changeUserData(UserChangeForm):
    password=None
    class Meta:
        model = User
        fields = ['username', 'first_name', 'last_name', 'email']
