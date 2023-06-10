#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int line,star,space;
    scanf("%d",&line);
    space = line-1;
    star = 1;
    for(int i=1;i<=line;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            if(i%2!=0){
                printf("^");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        space--;
        star=star+2;
    }
}
