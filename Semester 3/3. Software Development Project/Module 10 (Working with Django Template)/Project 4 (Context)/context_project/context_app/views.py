from django.shortcuts import render
import datetime
# Create your views here.


def home(request):
    info = {
        "name": "jonayed",
        "age": 27,
        "birthday": datetime.datetime.now(),
        "favorite_fruits": ["Apple", "Mango", "Lichi", "Ice Apple"],
        "courses": [
            {
                'course_id': 101,
                'course_name': "Python",
                'course_fee': 5000,
            },
            {
                'course_id': 102,
                'course_name': "Django",
                'course_fee': 7000,
            },
            {
                'course_id': 103,
                'course_name': "Frontend",
                'course_fee': 3000,
            },
        ],
    }
    return render(request, 'home.html', context={"info": info})
