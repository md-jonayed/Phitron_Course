// B. Print from 1 to N
#include<stdio.h>
void print(int number){
    if(number==0){
        return;
    }
    print(number-1);
    printf("%d\n",number);
}
int main(){
    int number;
    scanf("%d",&number);
    print(number);
}