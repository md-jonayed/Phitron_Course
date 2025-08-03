from .import models
from django import forms


class PostForm(forms.ModelForm):
    class Meta:
        model = models.Post
        # fields = '__all__'
        exclude=['author']
