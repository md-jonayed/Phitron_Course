from django import forms
from .import models


class StudentForm(forms.ModelForm):
    class Meta:
        model = models.StudentModel
        fields = '__all__'
        # fields = ['name', 'roll']
        # exclude = ['roll']
        labels = {
            'name': "Student Name",
            'father_name': "Father's Name",
        }

        widgets = {
            # 'roll': forms.TextInput(attrs={'class': 'btn-primary'}),

        }

        help_texts = {
            'name': "write your full name",
        }

        error_messages = {
            'name': {'required': "your full name is required"},
        }
