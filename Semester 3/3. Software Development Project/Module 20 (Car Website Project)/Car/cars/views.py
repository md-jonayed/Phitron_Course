from django.shortcuts import render, get_object_or_404, redirect
from .forms import *
from django.shortcuts import get_object_or_404, redirect
from django.contrib.auth.decorators import login_required
from .models import Car, Purchase
from django.contrib import messages
# Create your views here.


def carDeatils(request, id):
    car = get_object_or_404(Car, pk=id)
    comments = car.comments.all().order_by(
        '-createdAt')

    if request.method == "POST":
        form = CommentForm(request.POST)
        if form.is_valid():
            comment = form.save(commit=False)
            comment.car = car

            if request.user.is_authenticated:
                comment.user = request.user
                comment.name = request.user.username
                comment.email = request.user.email
            comment.save()
            return redirect("carDeatils", id=car.id)
    else:
        form = CommentForm()
    context = {
        'car': car,
        'comments': comments,
        "form": form,
    }
    return render(request, 'carDetails.html', context)


@login_required
def buy_car(request, car_id):
    car = get_object_or_404(Car, id=car_id)

    if car.quantity <= 0:
        messages.error(request, "Sorry, this car is out of stock.")
        return redirect('carDetails', id=car.id)

    car.quantity -= 1
    car.save()

    Purchase.objects.create(user=request.user, car=car, quantity=1)

    messages.success(
        request, f"You have successfully purchased {car.brand.brandName} {car.carModel}.")
    return redirect('profile')
