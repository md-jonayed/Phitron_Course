from django.shortcuts import render, redirect
from .import models, forms
# Create your views here.


def add_task(request):
    if request.method == "POST":
        taskForm = forms.TaskForm(request.POST)
        if taskForm.is_valid():
            taskForm.save()
            return redirect('homepage')
    else:
        taskForm = forms.TaskForm()
    return render(request, 'task.html', context={'form': taskForm})


def edit_task(request, id):
    task = models.Task.objects.get(pk=id)
    taskForm = forms.TaskForm(instance=task)
    if request.method == 'POST':
        taskForm = forms.TaskForm(request.POST, instance=task)
        if taskForm.is_valid():
            taskForm.save()
            return redirect('homepage')
    return render(request, 'task.html', context={'form': taskForm})


def delete_task(request, id):
    task = models.Task.objects.get(pk=id)
    task.delete()
    return redirect('homepage')
