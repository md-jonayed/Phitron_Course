// P. First digit !
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int digit;
    number = number/10;
    while(number>=10){
        number = number/10;
    }

    if(number%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
}