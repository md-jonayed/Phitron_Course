// N. Char
#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    int d = ch;
    if(d >91){
        printf("%c\n",d-32);
    }
    else if(d<91){
        printf("%c\n",d+32);
    }
}