// M. Replace MinMax
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0],minIndex,maxIndex;
    for(int i=0;i<size;i++){
        if(max<=a[i]){
            max=a[i];
            maxIndex=i;
        }
        if(a[i]<=min){
            min=a[i];
            minIndex=i;
        }   
    }

    a[minIndex]=max;
    a[maxIndex]=min;
    
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}