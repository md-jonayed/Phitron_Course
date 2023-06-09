#include<stdio.h>

void chnage_it(int *a, int size){
    *(a+size-1) = 100;
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    chnage_it(a,size);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}