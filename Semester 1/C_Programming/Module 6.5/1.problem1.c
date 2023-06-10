// C. Next Alphabet
#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    int ascii = ch;
    if(ascii>=65 && ascii<=90){
        ascii= ascii+32;
        if(ascii==122){
            ascii=97;
        }
        else{
            ascii = ascii+1;
        }
    }
    else if(ascii>=97 && ascii<=122){
        
        if(ascii==122){
            ascii=97;
        }
        else{
            ascii = ascii+1;
        }
    }
    printf("%c\n",ascii);
}