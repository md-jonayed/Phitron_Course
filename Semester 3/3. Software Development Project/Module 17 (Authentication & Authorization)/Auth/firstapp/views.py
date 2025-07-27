from django.shortcuts import render, redirect
from .import forms
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import login, logout, authenticate, update_session_auth_hash
# Create your views here.


def home(request):
    return render(request, 'home.html')


def register(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            form = forms.RegisterForm(request.POST)
            if form.is_valid():
                messages.success(request, "Account Created successfully")
                # messages.warning(request,'Warning')
                # messages.info(request, 'Info')
                form.save(commit=True)
                return redirect('login')
                # print(form.cleaned_data)
        else:
            form = forms.RegisterForm()
        return render(request, 'signup.html', context={'form': form})
    else:
        return redirect('profile')


# def user_login(request):
#     if request.method == "POST":
#         form = AuthenticationForm(request=request, data=request.POST)
#         if form.is_valid():
#             name = form.cleaned_data['username']
#             password = form.cleaned_data['password']
#             user = authenticate(username=name, password=password)
#             if user is not None:
#                 login(request, user)
#                 return redirect('profile')
#             else:
#                 return redirect('login')
#     else:
#         form = AuthenticationForm()
#         return render(request, 'login.html', context={'form': form})

def user_login(request):
    if not request.user.is_authenticated:
        if request.method == "POST":
            form = AuthenticationForm(request=request, data=request.POST)
            if form.is_valid():
                name = form.cleaned_data['username']
                password = form.cleaned_data['password']
                user = authenticate(username=name, password=password)
                if user is not None:
                    login(request, user)
                    messages.success(
                        request, f"Welcome back, {user.username}!")
                    return redirect('profile')
                else:
                    messages.error(request, "Invalid username or password.")
            else:
                messages.error(request, "Invalid username or password.")
        else:
            form = AuthenticationForm()
        return render(request, 'login.html', context={'form': form})
    else:
        return redirect('profile')


# def profile(request):
#     user = request.user
#     if request.user.is_authenticated:
#         return render(request, 'profile.html', context={'user': user})
#     else:
#         return redirect('login')

def profile(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = forms.changeUserData(request.POST, instance=request.user)
            if form.is_valid():
                messages.success(request, "Account Updated successfully")
                # messages.warning(request,'Warning')
                # messages.info(request, 'Info')
                form.save(commit=True)
                return redirect('login')
                # print(form.cleaned_data)
        else:
            form = forms.changeUserData(instance=request.user)
        return render(request, 'profile.html', context={'form': form})
    else:
        return redirect('register')


def user_logout(request):
    logout(request)
    return render(request, 'home.html')


def password_change(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = PasswordChangeForm(user=request.user, data=request.POST)
            if form.is_valid():
                form.save()  # Saves the new password
                update_session_auth_hash(request, form.user)
                # If you're logging the user out after the password change (as per your message), you do not need update_session_auth_hash. That function is only used when you want to keep the user logged in after changing their password.
                messages.success(
                    request, "Your password has been changed successfully. Please log in again.")
                logout(request)  # Logs out the current user
                return redirect('login')  # Redirects to login page
            else:
                messages.error(request, "Please correct the errors below.")
        else:
            form = PasswordChangeForm(user=request.user)
        return render(request, 'passchange.html', {'form': form})
    else:
        return redirect('login')


def password_change2(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = SetPasswordForm(user=request.user, data=request.POST)
            if form.is_valid():
                form.save()  # Set the new password
                update_session_auth_hash(request, form.user)
                messages.success(
                    request, "Your password has been changed successfully. Please log in again.")
                logout(request)  # Log out the user
                return redirect('login')
            else:
                messages.error(request, "Please correct the errors below.")
        else:
            form = SetPasswordForm(user=request.user)
        return render(request, 'passchange2.html', {'form': form})
    return redirect('login')


def changeUserData(request):
    if request.user.is_authenticated:
        if request.method == "POST":
            form = forms.changeUserData(request.POST, instance=request.user)
            if form.is_valid():
                messages.success(request, "Account Updated successfully")
                # messages.warning(request,'Warning')
                # messages.info(request, 'Info')
                form.save(commit=True)
                return redirect('login')
                # print(form.cleaned_data)
        else:
            form = forms.changeUserData()
        return render(request, 'profile.html', context={'form': form})
    else:
        return redirect('register')
