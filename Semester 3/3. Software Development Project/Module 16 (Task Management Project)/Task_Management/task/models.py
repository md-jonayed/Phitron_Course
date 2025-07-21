from django.db import models


class Task(models.Model):
    task_title = models.CharField(max_length=256)
    task_description = models.TextField()
    is_task_completed = models.BooleanField(default=False)
    task_assign_date = models.DateTimeField()

    def __str__(self):
        return f"{self.task_title} | {self.task_assign_date} | Completed: {self.is_task_completed}"
