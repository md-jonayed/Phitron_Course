#include<stdio.h>
int count_before_zero(int *a, int size);
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int result = count_before_zero(a,size);
    printf("%d\n",result);
}

int count_before_zero(int *a, int size){
    int count = 0 ;
    for(int i=0;i<size;i++){
        if((*(a+i))==0){
            break;
        }
        count++;
    }
    return count;
}