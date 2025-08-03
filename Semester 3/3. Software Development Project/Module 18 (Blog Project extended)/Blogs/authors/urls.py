from django.contrib import admin
from django.urls import path, include
from .import views

urlpatterns = [
    path('register/', views.register, name="register"),
    path('login/', views.userLogin, name='userLogin'),
    path('logout/', views.logoutUser, name="logoutUser"),
    path('profile/', views.profile, name="profile"),
    path('profile/edit/', views.editProfile, name="editProfile"),
    path('profile/edit/changePassword/',
         views.changePassword, name="changePassword")
]
