from django.shortcuts import render, redirect
from .import models
# Create your views here.


def home(request):
    students = models.Students.objects.all()
    print(students)
    return render(request, 'home.html', context={'data': students})


def delete_student(request, roll):
    std = models.Students.objects.get(pk=roll).delete()
    print(std)
    return redirect("home")
