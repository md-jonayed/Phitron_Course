from django.urls import path
from .import views

urlpatterns = [
    path('homepage/', views.homepage, name="homepage"),
    path('about/', views.about, name="about"),
    path('form/', views.form, name='form'),
    path('django_form/', views.djangoForm, name='django_form'),
]
