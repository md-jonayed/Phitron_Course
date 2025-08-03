from . import forms  # Make sure this imports your ChangeUserData form correctly
from django.shortcuts import render, redirect
from .import forms
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import Post
# Create your views here.


# def add_authors(request):
#     if request.method == 'POST':
#         authorForm = forms.AuthorForm(request.POST)
#         if authorForm.is_valid():
#             authorForm.save()
#             return redirect('add_authors')
#     else:
#         authorForm = forms.AuthorForm()
#     return render(request, 'add_author.html', context={'form': authorForm})


def register(request):
    if request.method == 'POST':
        form = forms.RegistrationForm(request.POST)
        if form.is_valid():
            user = form.save()
            messages.success(
                request, f"Registration complete, {user.username}!")
            return redirect('userLogin')
        else:
            messages.error(request, "Please correct the errors below.")
    else:
        form = forms.RegistrationForm()

    return render(request, 'register.html', context={'form': form, 'type': 'Register'})


def userLogin(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, data=request.POST)
        if form.is_valid():
            username = form.cleaned_data['username']
            password = form.cleaned_data['password']
            user = authenticate(username=username, password=password)
            if user is not None:
                login(request, user)
                messages.success(request, f"Welcome {user.username}!")
                return redirect('profile')
            else:
                messages.error(request, "Invalid username or password.")
        else:
            messages.error(request, "Please correct the errors below.")
    else:
        form = AuthenticationForm()

    return render(request, 'register.html', context={'form': form, 'type': 'Login'})


@login_required
def profile(request):
    data = Post.objects.filter(author=request.user)
    return render(request, 'profile.html', context={'data': data})


@login_required
def editProfile(request):
    if request.method == 'POST':
        form = forms.ChangeUserData(request.POST, instance=request.user)
        if form.is_valid():
            user = form.save()
            messages.success(
                request, f"Profile updated successfully, {user.username}!")
            return redirect('profile')
        else:
            messages.error(request, "Please correct the errors below.")
    else:
        form = forms.ChangeUserData(instance=request.user)

    return render(request, 'updateProfile.html', {'form': form, 'type': 'editProfile'})


@login_required
def changePassword(request):
    if request.method == 'POST':
        form = PasswordChangeForm(user=request.user, data=request.POST)
        if form.is_valid():
            user = form.save()
            update_session_auth_hash(request, user)  # Keeps the user logged in
            messages.success(
                request, f"Password updated successfully, {user.username}!")
            # Redirecting to profile instead of login
            return redirect('profile')
        else:
            messages.error(request, "Please correct the errors below.")
    else:
        form = PasswordChangeForm(user=request.user)

    return render(request, 'passwordChange.html', {'form': form})


def logoutUser(request):
    logout(request)
    return redirect('home')
