from django.shortcuts import render
from task.models import Task
from category.models import Category


def home(request):
    return render(request, 'home.html')


def homepage(request):
    task = Task.objects.all()
    category = Category.objects.all()
    return render(request, 'homepage.html', context={'task': task, 'category': category})
