from django.shortcuts import render, redirect
from .import forms
# Create your views here.


def add_authors(request):
    if request.method == 'POST':
        authorForm = forms.AuthorForm(request.POST)
        if authorForm.is_valid():
            authorForm.save()
            return redirect('add_authors')
    else:
        authorForm = forms.AuthorForm()
    return render(request, 'add_author.html', context={'form': authorForm})
