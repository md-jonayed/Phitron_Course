from django.shortcuts import render, redirect
from .import forms
from .import models
from django.contrib import messages
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


def edit_posts(request, id):
    post = models.Post.objects.get(pk=id)
    postForm = forms.PostForm(instance=post)
    if request.method == 'POST':
        postForm = forms.PostForm(request.POST, instance=post)
        if postForm.is_valid():
            postForm.save()
            return redirect('home')
    # else:
    #     postForm = forms.PostForm()
    return render(request, 'post.html', context={'form': postForm})


def delete_posts(request, id):
    post = models.Post.objects.get(pk=id)
    post.delete()
    messages.warning(request, 'The post has been deleted.')
    return redirect('home')
