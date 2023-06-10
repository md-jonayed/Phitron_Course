#include<stdio.h>
int main(){
    int lines,space,star;
    scanf("%d",&lines);
    space = lines-1;
    star = 1;

//     for printing this patter :
//     *
//    ***
//   *****
//  *******
// *********
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        space--;
        star=star+2;
    }
    
}