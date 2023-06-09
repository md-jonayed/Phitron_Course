// T. Shape2
#include<stdio.h>
int main(){
    int lines,stars,spaces;
    scanf("%d",&lines);
    spaces = lines-1;
    stars = 1;

    for(int i=1;i<=lines; i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
        spaces--;
        stars = stars+2;
    }
}