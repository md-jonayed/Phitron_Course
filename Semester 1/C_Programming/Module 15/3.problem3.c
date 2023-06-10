#include<stdio.h>
int count_odd(int *a, int size){
    int countOdd=0;
    for(int i=0;i<size;i++){
        if((*(a+i))%2 != 0){
            countOdd++;
        }
    }
    return countOdd;
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int result = count_odd(a,size);
    printf("%d\n",result);
}