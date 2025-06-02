from django.contrib import admin
from django.urls import path, include
from .import views
urlpatterns = [
    path("page1/", views.page1),
    path("page2/", views.page2),

]
