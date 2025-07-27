from django.contrib import admin
from django.urls import path
from .import views

urlpatterns = [
    path('', views.home, name="home"),
    path('login/', views.user_login, name="login"),
    path('register/', views.register, name="register"),
    path('profile/', views.profile, name="profile"),
    path('logout/', views.user_logout, name="logout"),
    path('password_change/', view=views.password_change, name="password_change"),
    path('password_change/', views.password_change2, name="password_change2"),
]
