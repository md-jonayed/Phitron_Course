#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number%2!=0){
        printf("ODD");
    }
    else{
        printf("EVEN");
    }
    return 0;
}