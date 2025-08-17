from django.contrib import admin
from django.urls import path, include
from .import views

urlpatterns = [
    # path('add/', views.add_posts, name="add_posts"),
    path('add/', views.AddPostCreateView.as_view(), name="add_posts"),
    path('edit/<int:id>', views.EditPostView.as_view(), name="edit_posts"),
    path('delete/<int:id>', views.DeletePostView.as_view(), name="delete_posts"),
    path('details/<int:id>', views.DetailPostView.as_view(), name="DetailPostView"),
]
