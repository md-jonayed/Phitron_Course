from django.shortcuts import render, redirect
from .forms import RegisterForm, ChangeUserData
from django.contrib import messages
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.views.decorators.http import require_POST
# Create your views here.


def home(request):
    return render(request, 'homepage.html')


def signup(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            form = RegisterForm(request.POST)
            if form.is_valid():
                user = form.save(commit=True)
                messages.success(
                    request, f"{user.username} your account is created successfully")
                # print(form.cleaned_data)
                return redirect("login")
            else:
                messages.error(request, "Please correct the errors below")

        else:
            form = RegisterForm()

        return render(request, 'signupPage.html', context={'form': form})
    else:
        return redirect("profile")


def userLogin(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            form = AuthenticationForm(request=request, data=request.POST)
            if form.is_valid():
                name = form.cleaned_data['username']
                password = form.cleaned_data['password']
                user = authenticate(username=name, password=password)
                if user is not None:
                    login(request, user)
                    return redirect("profile")
                else:
                    messages.error(
                        request, "Username or password didn't matched")
        else:
            form = AuthenticationForm()
        return render(request, 'loginPage.html', context={'form': form})
    else:
        return redirect("profile")


def profile(request):
    if request.user.is_authenticated:
        return render(request, 'profilePage.html', context={"user": request.user})
    else:
        return redirect("login")


def userLogout(request):
    if request.user.is_authenticated:
        logout(request)
        return redirect("home")
    else:
        return redirect("login")


def passwordChange(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = PasswordChangeForm(user=request.user, data=request.POST)
            if form.is_valid():
                user = form.save()
                update_session_auth_hash(request, user)
                messages.success(
                    request, "Your password was updated successfully.")
                return redirect('profile')
            else:
                messages.error(request, "Please correct the errors below.")
        else:
            form = PasswordChangeForm(user=request.user)

        return render(request, 'passwordChange.html', context={'form': form})
    else:
        return redirect("login")


def passwordChange2(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = SetPasswordForm(user=request.user, data=request.POST)
            if form.is_valid():
                user = form.save()
                update_session_auth_hash(request, user)
                messages.success(
                    request, "Your password was updated successfully.")
                return redirect('profile')
            else:
                messages.error(request, "Please correct the errors below.")
        else:
            form = SetPasswordForm(user=request.user)

        return render(request, 'passwordChange.html', context={'form': form})
    else:
        return redirect("login")


def changeUserData(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = ChangeUserData(request.POST, instance=request.user)
            if form.is_valid():
                user = form.save(commit=True)
                messages.success(
                    request, f"{user.username} your account is Updated successfully")
                # print(form.cleaned_data)
                return redirect("profile")
            else:
                messages.error(request, "Please correct the errors below")

        else:
            form = ChangeUserData(instance=request.user)

        return render(request, 'changeUserData.html', context={'form': form})
    else:
        return redirect("login")
