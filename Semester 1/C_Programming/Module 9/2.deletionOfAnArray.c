#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }

    int position;
    scanf("%d",&position);

    for(int i=position;i<size;i++){
        ar[i]=ar[i+1];
    }

    for(int i=0;i<size-1;i++){
        printf("%d ",ar[i]);
    }
}