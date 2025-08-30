from django.db import models
from brands.models import Brand
from django.contrib.auth.models import User
# Create your models here.


class Car(models.Model):
    carModel = models.CharField(max_length=256)
    brand = models.ForeignKey(
        Brand, on_delete=models.CASCADE, related_name="cars")
    price = models.IntegerField()
    description = models.TextField(blank=True, null=True)
    quantity = models.IntegerField()
    carImage = models.ImageField(upload_to="car_images/")

    def __str__(self):
        return f"{self.brand.brandName} {self.carModel}"


class Comment(models.Model):
    car = models.ForeignKey(
        Car, on_delete=models.CASCADE, related_name="comments")
    user = models.ForeignKey(
        User, on_delete=models.SET_NULL, null=True, blank=True)
    name = models.CharField(max_length=256)
    email = models.EmailField(blank=True)
    text = models.TextField()
    createdAt = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.user.username} {self.text} {self.createdAt}"


class Purchase(models.Model):
    user = models.ForeignKey(
        User, on_delete=models.CASCADE, related_name="purchase")
    car = models.ForeignKey(
        Car, on_delete=models.CASCADE, related_name="purchase")
    quantity = models.PositiveIntegerField(default=0)
    purchaseDate = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.user.username} bought {self.quantity} cars of this model {self.car.carModel}"
