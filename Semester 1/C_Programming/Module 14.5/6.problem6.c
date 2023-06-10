#include<stdio.h>
char small_to_capital(char c);
int main(){
    char c;
    scanf("%c",&c);
    printf("%c\n",small_to_capital(c));
}

char small_to_capital(char c){
    int d = c-32;
    char s = d;
    return s;
}
