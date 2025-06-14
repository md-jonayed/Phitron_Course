from django.shortcuts import render
from .forms import ContactForm, StudentData, PasswordValidator
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
    if request.method == "POST":
        form = ContactForm(request.POST, request.FILES)  # Instantiate the form
        if form.is_valid():
            file = form.cleaned_data['file']
            with open('./myapp/upload'+file.name, 'wb+') as destination:
                for chunk in file.chunks():
                    destination.write(chunk)
            print(form.cleaned_data)
            return render(request, 'django_form.html', {"form": form})
    else:
        form = ContactForm()
    return render(request, 'django_form.html', context={'form': form})


def studentForm(request):
    if request.method == 'POST':
        form = StudentData(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = StudentData()

    return render(request, 'student_form.html', context={'form': form})


def passwordValidator(request):
    if request.method == 'POST':
        form = PasswordValidator(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = PasswordValidator()

    return render(request, 'login_page.html', context={'form': form})
