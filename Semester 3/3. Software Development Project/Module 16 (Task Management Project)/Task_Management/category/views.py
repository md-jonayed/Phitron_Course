from django.shortcuts import render, redirect
from .import forms, models
# Create your views here.


def add_category(request):
    if request.method == "POST":
        categoryForm = forms.CategoryForm(request.POST)
        if categoryForm.is_valid():
            categoryForm.save()
            return redirect('homepage')
    else:
        categoryForm = forms.CategoryForm()
    return render(request, 'category.html', context={'form': categoryForm})


def edit_category(request, id):
    category = models.Category.objects.get(pk=id)
    categoryForm = forms.CategoryForm(instance=category)
    if request.method == "POST":
        categoryForm = forms.CategoryForm(request.POST, instance=categoryForm)
        if categoryForm.is_valid():
            categoryForm.save()
            return redirect('homepage')
    return render(request, 'homepage.html', context={'form': categoryForm})


def delete_category(request, id):
    category = models.Category.objects.get(pk=id)
    category.delete()
    return redirect('homepage')
