// B. Print
#include<stdio.h>
void printNumber(int x){
    for(int i=1;i<=x;i++){
        printf("%d",i);
        if(i==x){
            return;
        }
        else{
            printf(" ");
        }
    }
}
int main(){
    int number;
    scanf("%d",&number);
    printNumber(number);
}