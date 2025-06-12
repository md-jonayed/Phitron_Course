from django.shortcuts import render
from .forms import ContactForm
# Create your views here.


def homepage(request):
    return render(request, 'home.html')


def about(request):
    if request.method == "POST":
        print(request.POST)
        name = request.POST.get("username")
        email = request.POST.get("email")
        select = request.POST.get("select")
        return render(request, 'about.html', {"username": name, "email": email, "select": select})
    else:
        return render(request, 'about.html')


def form(request):
    # print(request.POST)
    # if request.method == "POST":
    #     name = request.POST.get("username")
    #     email = request.POST.get("email")
    #     return render(request, 'form.html', {"username": name, "email": email})
    # else:
    #     return render(request, 'form.html')
    return render(request, 'form.html')


def djangoForm(request):
    form = ContactForm(request.POST)  # Instantiate the form
    if form.is_valid():
        print(form.cleaned_data)
    return render(request, 'django_form.html', {"form": form})
