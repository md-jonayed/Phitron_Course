#include<stdio.h>
char capital_to_small(char c){
    int d = c+32;
    char s = d;
    return s;
}

int main(){
    char c;
    scanf("%c",&c);
    printf("%c\n",capital_to_small(c));
}