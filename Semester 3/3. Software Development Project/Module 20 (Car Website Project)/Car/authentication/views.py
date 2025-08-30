from .forms import LoggedOutPasswordChangeForm
from django.contrib.auth import update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.forms import PasswordChangeForm
from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.forms import UserCreationForm, AuthenticationForm
from django.contrib.auth.decorators import login_required


def signup_view(request):
    if request.method == "POST":
        form = UserCreationForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect("login")
    else:
        form = UserCreationForm()
    return render(request, "signup.html", {"form": form})


def login_view(request):
    if request.method == "POST":
        form = AuthenticationForm(request, data=request.POST)
        if form.is_valid():
            user = form.get_user()
            login(request, user)
            return redirect("profile")
    else:
        form = AuthenticationForm()
    return render(request, "login.html", {"form": form})


def logout_view(request):
    logout(request)
    return redirect("login")


@login_required
def profile_view(request):
    return render(request, "profile.html")


def unified_password_change(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = PasswordChangeForm(request.user, request.POST)
            if form.is_valid():
                user = form.save()
                update_session_auth_hash(request, user)
                messages.success(
                    request, "Your password was changed successfully!")
                return redirect("profile")
        else:
            form = PasswordChangeForm(request.user)
    else:
        if request.method == "POST":
            form = LoggedOutPasswordChangeForm(request.POST)
            if form.is_valid():
                form.save()
                messages.success(
                    request, "Password changed successfully. Please log in.")
                return redirect("login")
        else:
            form = LoggedOutPasswordChangeForm()

    return render(request, "password_change_unified.html", {"form": form})
