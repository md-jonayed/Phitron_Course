from django import forms
from .models import Car, Comment


class CarForm(forms.ModelForm):
    class Meta:
        model = Car
        fields = ['carModel', 'brand', 'price', 'quantity', 'carImage']

        # Optional: add Bootstrap classes for better UI
        widgets = {
            'carModel': forms.TextInput(attrs={'class': 'form-control', 'placeholder': 'Enter car model'}),
            'brand': forms.Select(attrs={'class': 'form-control'}),
            'price': forms.NumberInput(attrs={'class': 'form-control', 'placeholder': 'Enter price'}),
            'quantity': forms.NumberInput(attrs={'class': 'form-control', 'placeholder': 'Enter quantity'}),
            'carImage': forms.ClearableFileInput(attrs={'class': 'form-control'}),
        }


class CommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        fields = ['name', 'email', 'text']
        widgets = {
            'name': forms.TextInput(attrs={'class': 'form-control', 'placeholder': 'Your name'}),
            'email': forms.EmailInput(attrs={'class': 'form-control', 'placeholder': 'Your email'}),
            'text': forms.Textarea(attrs={'class': 'form-control', 'rows': 3, 'placeholder': 'Your comment'}),
        }
