from django.db import models

# Create your models here.
class Brand(models.Model):
    brandName=models.CharField(max_length=256,unique=True)
    country= models.CharField(max_length=256)
    logo=models.ImageField(upload_to="brand_logos/",blank=True,null=True)

    def __str__(self):
        return f"{self.brandName}"