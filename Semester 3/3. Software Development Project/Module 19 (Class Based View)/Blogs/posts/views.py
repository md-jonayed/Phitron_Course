from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from .import forms
from .import models
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.utils.decorators import method_decorator
# Create your views here.


# @login_required
# def add_posts(request):
#     if request.method == 'POST':
#         postForm = forms.PostForm(request.POST)
#         if postForm.is_valid():
#             # postForm.cleaned_data['author'] = request.user
#             postForm.instance.author = request.user
#             postForm.save()
#             return redirect('add_posts')
#     else:
#         postForm = forms.PostForm()
#     return render(request, 'post.html', context={'form': postForm})

# add post using  class based view

@method_decorator(login_required, name="dispatch")
class AddPostCreateView(CreateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'post.html'
    success_url = reverse_lazy('add_posts')

    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)


# @login_required
# def edit_posts(request, id):
#     post = models.Post.objects.get(pk=id)
#     postForm = forms.PostForm(instance=post)
#     if request.method == 'POST':
#         postForm = forms.PostForm(request.POST, instance=post)
#         if postForm.is_valid():
#             postForm.instance.author = request.user
#             postForm.save()
#             return redirect('profile')
#     # else:
#     #     postForm = forms.PostForm()
#     return render(request, 'post.html', context={'form': postForm})

@method_decorator(login_required, name="dispatch")
class EditPostView(UpdateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')

# @login_required
# def delete_posts(request, id):
#     post = models.Post.objects.get(pk=id)
#     post.delete()
#     messages.warning(request, 'The post has been deleted.')
#     return redirect('home')


@method_decorator(login_required, name="dispatch")
class DeletePostView(DeleteView):
    model = models.Post
    template_name = 'deletePost.html'
    success_url = reverse_lazy("profile")
    pk_url_kwarg = "id"


class DetailPostView(DetailView):
    model = models.Post
    pk_url_kwarg = 'id'
    template_name = 'postDetails.html'
    context_object_name = 'post'

    def post(self, request, *args, **kwargs):
        post = self.get_object()
        commentForm = forms.CommentForm(data=request.POST)
        if commentForm.is_valid():
            newComment = commentForm.save(commit=False)
            newComment.post = post
            newComment.author = request.user  # 👈 if you want logged-in user as author
            newComment.save()
        return self.get(request, *args, **kwargs)

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object
        context['comments'] = post.comments.all().order_by('-created_on')
        context['comment_count'] = post.comments.count()
        context['commentForm'] = forms.CommentForm()  # ✅ instantiate the form
        return context
