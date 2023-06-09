// E. Lowest Number
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    int min,index;
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    min = a[0]; 
    index=0;
    for(int i=0;i<size;i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }
    }
    printf("%d %d\n",min,index+1);


}