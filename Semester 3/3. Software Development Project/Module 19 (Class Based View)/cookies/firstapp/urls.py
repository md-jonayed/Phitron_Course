from django.contrib import admin
from django.urls import path, include
from .import views
urlpatterns = [
    path("", views.home, name="home"),
    path("set_session/", views.setSession, name="setSession"),
    path("get_session/", views.getSession, name="getSession"),
    path("delete_session/", views.deleteSession, name="deleteSession"),
    path("get_cookie/", views.getCookie, name="getCookie"),
    path("delete_cookie/", views.deleteCookie, name="deleteCookie"),
]
