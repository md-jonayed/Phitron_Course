#include<stdio.h>
void fun(int a[],int size, int index){
    if(index==size){
        return;
    }
    printf("%d\n",a[index]);
    fun(a,size,index+1);
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    fun(a,size,0);
}