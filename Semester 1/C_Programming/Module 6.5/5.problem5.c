// I. Lucky Numbers
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int a,b;
    
    a = number%10;
    number = number/10;
    b = number%10;

    if(a%b==0 || b%a==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

}