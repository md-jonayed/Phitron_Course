from django.contrib import admin
from django.urls import path, include
from .import views
from django.contrib.auth.views import LogoutView
from django.urls import reverse_lazy
urlpatterns = [
    path('register/', views.register, name="register"),
    # path('login/', views.userLogin, name='userLogin'),
    path('login/', views.UserLoginView.as_view(), name='userLogin'),
    path('logout/', views.logoutUser, name="logoutUser"),
    # path('logout/', views.LogoutView.as_view(next_page=reverse_lazy('home')),
    #      name="logoutUser"),
    # path('logout/', views.LogoutView.as_view(), name="logoutUser"),
    # path('logout', views.LogoutUserView.as_view(), name="logoutUser"),
    path('profile/', views.profile, name="profile"),
    path('profile/edit/', views.editProfile, name="editProfile"),
    path('profile/edit/changePassword/',
         views.changePassword, name="changePassword")
]
