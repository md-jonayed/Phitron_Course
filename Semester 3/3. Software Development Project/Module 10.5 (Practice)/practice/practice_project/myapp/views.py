from django.shortcuts import render
import datetime
# Create your views here.

data = {
    "id": "19101019",
    "name": "Jonayed",
    "cgpa": 3.74,
    "roll": 19,
    "passing_year": 2023,
    "courses": ["C", "C++", "Data-structures", "Algorithms", "Java", "Python", "Machine-Learning", "AI"],
    "date": datetime.datetime.now(),
    "values": [
        {'name': 'zed', 'age': 19},
        {'name': 'amy', 'age': 22},
        {'name': 'joe', 'age': 31},
    ]
}


def page1(request):
    return render(request, 'page1.html', context={"information": data})


def page2(request):
    return render(request, 'page2.html', context={"information": data})
