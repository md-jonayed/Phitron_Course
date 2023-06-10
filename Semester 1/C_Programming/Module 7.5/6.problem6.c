// F. Reversing
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=size-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}