#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i =0;i<size;i++){
        scanf("%d",&ar[i]);
    }

    for(int i =0;i<size;i++){
        printf("%d\n",ar[i]);
    }

    int position,value;
    scanf("%d %d",&position,&value);

    for(int i=size;i>position;i--){
        ar[i] = ar[i-1];
    }
    ar[position]=value;

    for(int i =0;i<=size;i++){
        printf("%d ",ar[i]);
    }
}