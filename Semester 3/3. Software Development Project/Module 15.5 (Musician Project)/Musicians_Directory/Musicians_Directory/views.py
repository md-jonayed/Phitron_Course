from django.shortcuts import render, redirect
from Musician.models import Musician
from Album.models import Album


def home(request):
    music_data = Musician.objects.all()
    album_data = Album.objects.all()
    return render(request, 'home.html', context={'music_data': music_data, 'album_data': album_data})
