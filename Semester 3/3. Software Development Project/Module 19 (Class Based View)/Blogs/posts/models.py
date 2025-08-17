from django.db import models
from categories.models import Category
# from authors.models import Author
from django.contrib.auth.models import User
# Create your models here.


class Post(models.Model):
    title = models.CharField(max_length=100)
    content = models.TextField()
    category = models.ManyToManyField(Category,)
# one post can be in multiple categories and one category have multiple posts
    author = models.ForeignKey(User, on_delete=models.CASCADE)
    # this means if a author's profile is deleted then all the posts under his profile will be deleted'
    # one author can have multiple posts
    # image=models.ImageField(upload_to='uploads/',blank=True,null=True) # this way the image will be uploaded to the global media folder
    image = models.ImageField(
        upload_to='posts/uploads/', blank=True, null=True)
    # this way the image will be uploaded to the app's media folder

    def __str__(self):
        return f"{self.title} -> {self.author}"


class Comments(models.Model):
    post = models.ForeignKey(
        Post, on_delete=models.CASCADE, related_name='comments')
    name = models.CharField(max_length=256)
    email = models.EmailField()
    body = models.TextField()
    created_on = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"commented by {self.name}"
