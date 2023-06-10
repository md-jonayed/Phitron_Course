// D. Fixed Password
#include<stdio.h>
int main(){
    int i=1;
    int password = 1999;
    while( i>0){
        int number;
        scanf("%d",&number);
        if(number == password){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
}