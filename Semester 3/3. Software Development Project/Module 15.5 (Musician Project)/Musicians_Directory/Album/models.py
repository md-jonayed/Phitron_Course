from django.db import models
from Musician.models import Musician
from django.core.validators import MinValueValidator, MaxValueValidator


class Album(models.Model):
    album_name = models.CharField(max_length=100)
    musician = models.ForeignKey(
        Musician, on_delete=models.CASCADE, related_name='albums')
    album_release_date = models.DateField()
    rating = models.IntegerField(
        validators=[
            MinValueValidator(1),
            MaxValueValidator(5),
        ],
        help_text="Enter a rating from 1 to 5"
    )

    def __str__(self):
        return f"{self.album_name} by {self.musician.first_name} {self.musician.last_name}"
