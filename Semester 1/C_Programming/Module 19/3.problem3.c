#include<stdio.h>
void printDigits(int number){
    if(number == 0){
        return; 
    }
    int x = number%10;
    printDigits(number/10);
    printf("%d ",x);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int number;
        scanf("%d",&number);
        printDigits(number);
        printf("\n");
    }
}