#include<stdio.h>
int char_to_ascii(char c){
    int value = c;
    return value;
}

int main(){
    char ch;
    scanf("%c",&ch);
    int result = char_to_ascii(ch);
    printf("%d\n",result);

}
