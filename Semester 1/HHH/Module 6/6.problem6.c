// Q. Digits
#include<stdio.h>
int main(){
    int noOfTestCases;
    scanf("%d",&noOfTestCases);
    for(int i=1;i<=noOfTestCases;i++){
        int number;
        scanf("%d",&number);
        do{
            int digits = number%10;
            printf("%d ",digits);
            number = number/10;
        }while(number!=0);
        printf("\n");
    }
}