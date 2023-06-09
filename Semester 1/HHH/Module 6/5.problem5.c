// F. Multiplication table
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i=1;i<=12;i++){
        printf("%d * %d = %d\n",number,i,(number*i));
    }
}