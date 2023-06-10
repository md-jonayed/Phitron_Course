#include<stdio.h>
int main(){
    int lines,stars,spaces;
    scanf("%d",&lines);
    stars = 2*lines-1;
    spaces=0;

//     for printing this pattern :
// *********
//  *******
//   *****
//    ***
//     *
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
        stars = stars-2;
        spaces++;
    }
}