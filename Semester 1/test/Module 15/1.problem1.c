#include<stdio.h>
void my_abs(int number);
int main(){
    int number;
    scanf("%d",&number);
    my_abs(number);
}

void my_abs(int number){
    if(number<0){
        number = number * -1;
    }
    printf("%d\n",number);
}
