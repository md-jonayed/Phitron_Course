# authentication/forms.py
from django import forms
from django.contrib.auth import authenticate, get_user_model
from django.contrib.auth.forms import PasswordChangeForm

User = get_user_model()


class LoggedOutPasswordChangeForm(forms.Form):
    username = forms.CharField(max_length=150, label="Username")
    old_password = forms.CharField(
        widget=forms.PasswordInput, label="Old Password")
    new_password1 = forms.CharField(
        widget=forms.PasswordInput, label="New Password")
    new_password2 = forms.CharField(
        widget=forms.PasswordInput, label="Confirm New Password")

    def clean(self):
        cleaned_data = super().clean()
        username = cleaned_data.get("username")
        old_password = cleaned_data.get("old_password")
        new_password1 = cleaned_data.get("new_password1")
        new_password2 = cleaned_data.get("new_password2")

        user = authenticate(username=username, password=old_password)
        if not user:
            raise forms.ValidationError("Invalid username or old password.")

        if new_password1 != new_password2:
            raise forms.ValidationError("New passwords do not match.")

        self.user = user
        return cleaned_data

    def save(self, commit=True):
        self.user.set_password(self.cleaned_data["new_password1"])
        if commit:
            self.user.save()
        return self.user
