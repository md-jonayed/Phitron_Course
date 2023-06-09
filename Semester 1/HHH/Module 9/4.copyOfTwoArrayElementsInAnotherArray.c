#include<stdio.h>
int main(){
    int size1;
    scanf("%d",&size1);
    int a[size1];
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }

    int size2;
    scanf("%d",&size2);
    int b[size2];
    for(int i=0;i<size2;i++){
        scanf("%d",&b[i]);
    }
    int n=size1+size2;
    int c[n];
    for(int i=0;i<size1;i++){
        c[i]=a[i];
    }
    int m = size1;
    for(int i=0;i<size2;i++){
        c[m]=b[i];
        m++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
}