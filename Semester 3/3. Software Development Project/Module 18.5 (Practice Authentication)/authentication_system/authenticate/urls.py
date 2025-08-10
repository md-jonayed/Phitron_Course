from django.contrib import admin
from django.urls import path, include
from .import views
urlpatterns = [
    path('', views.home, name="home"),
    path('signup/', views.signup, name="signup"),
    path('login/', views.userLogin, name="login"),
    path('profile/', views.profile, name="profile"),
    path('profile/changeUserData/', views.changeUserData, name="changeUserData"),
    path('logout/', views.userLogout, name="logout"),
    path('passwordChange/', views.passwordChange, name="passwordChange"),
    path('passwordChange2/', views.passwordChange2, name="passwordChange2"),
]
