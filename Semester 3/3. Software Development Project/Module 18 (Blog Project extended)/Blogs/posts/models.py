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

    def __str__(self):
        return f"{self.title} -> {self.author}"
