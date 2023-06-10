// A. Print Recursion
#include<stdio.h>
void recursion(int number){
    if(number==0){
        return;
    }
    recursion(number-1);
    printf("I love Recursion\n");
}
int main(){
    int number;
    scanf("%d",&number);
    recursion(number);
}