// P. Shape1
#include<stdio.h>
int main(){
    int lines,stars;
    scanf("%d",&lines);
    stars = lines;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
        stars--;
    }
}