from django.shortcuts import render, redirect
from .import forms


def add_profiles(request):
    if request.method == "POST":
        profileForm = forms.ProfileForm(request.POST)
        if profileForm.is_valid():
            profileForm.save()
            return redirect('add_profiles')
    else:
        profileForm = forms.ProfileForm()

    return render(request, 'profile.html', context={'form': profileForm})
