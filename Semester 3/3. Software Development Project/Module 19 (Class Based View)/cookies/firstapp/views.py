from django.shortcuts import render
from datetime import datetime, timedelta
from django.http import HttpResponse
# Create your views here.


def home(request):
    response = render(request, 'home.html')
    response.set_cookie("name", "Jon19")
    # response.set_cookie("name", "Jon1",max_age=5)
    response.set_cookie(
        "name", "Jon1", expires=datetime.utcnow()+timedelta(days=7))
    return response


def getCookie(request):
    name = request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request, 'getCookie.html', context={'name': name})


def deleteCookie(request):
    response = render(request, 'deleteCookie.html')
    response.delete_cookie('name')
    return response


def setSession(request):
    data = {
        'name': 'jon19',
        'age': 23,
        'language': 'Bangla',
    }
    print(request.session.get_session_cookie_age())
    print(request.session.get_expiry_date())
    request.session.update(data)
    return render(request, 'home.html')


def getSession(request):   # not accomplished full functionality of this function
    if 'name' in request.session:
        name = request.session.get('name', 'Guest')
        data = request.session
        request.session.modified = True
        return render(request, 'getSession.html', context={'data': data})
    else:
        return HttpResponse("Your session has been expired, login again")


def deleteSession(request):
    # del request.session['name']
    request.session.flush()
    request.session.clear_expired()
    return render(request, 'deleteSession.html')
