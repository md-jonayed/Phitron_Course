from django.db import models
from task.models import Task
# Create your models here.


class Category(models.Model):
    category_name = models.CharField(max_length=256)
    tasks = models.ManyToManyField(Task, related_name='categories')

    def __str__(self):
        return f"{self.category_name}"
