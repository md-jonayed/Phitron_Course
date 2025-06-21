from django.shortcuts import render, redirect
from .import forms
# Create your views here.


def add_posts(request):
    if request.method == 'POST':
        postForm = forms.PostForm(request.POST)
        if postForm.is_valid():
            postForm.save()
            return redirect('add_posts')
    else:
        postForm = forms.PostForm()
    return render(request, 'post.html', context={'form': postForm})
