from django.contrib import admin
from django.urls import path, include
from .import views
urlpatterns = [
    path('', view=views.home, name="home"),
    path('delete_student/<int:roll>', view=views.delete_student, name="delete_student"),
]
