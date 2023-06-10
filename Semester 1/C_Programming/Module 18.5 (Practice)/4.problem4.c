// F. Print Even Indices
#include<stdio.h>
void printArrays(int a[],int size, int index){
    if(index==size){
        return;
    }

    printArrays(a,size,index+1);
    if(index%2==0){
        printf("%d ",a[index]);
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printArrays(a,size,0);
}