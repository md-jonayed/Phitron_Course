// G. Max and MIN
#include<stdio.h>
void findMinMax(int a[],int size){
    int min,max;
    min=a[0],max=a[0];
    for(int i=1;i<size;i++){
        if(min>a[i]){
            min=a[i];
        }
    }

    for(int i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    printf("%d %d\n",min,max);
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    findMinMax(a,size);
}