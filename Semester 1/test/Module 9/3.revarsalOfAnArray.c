#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    int i=0;
    int j=size-1;
    int temp;
    while(i<j){
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}