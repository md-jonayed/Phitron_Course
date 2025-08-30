from django.contrib import admin
from django.urls import path, include
from .import views
urlpatterns = [
    path('carDeatils/<int:id>', views.carDeatils, name="carDeatils"),
    path('buy/<int:car_id>/', views.buy_car, name='buy_car'),
]
