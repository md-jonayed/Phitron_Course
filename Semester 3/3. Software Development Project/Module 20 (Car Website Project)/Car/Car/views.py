from django.shortcuts import render
from cars.models import Car, Brand


def home(request):
    brand_id = request.GET.get('brand')   
    cars = Car.objects.all().order_by("carModel")
    if brand_id:   
        cars = cars.filter(brand_id=brand_id)

    brands = Brand.objects.all().order_by("brandName")
    return render(request, 'home.html', {
        'cars': cars,
        'brands': brands,
        'selected_brand': int(brand_id) if brand_id else None,
    })
