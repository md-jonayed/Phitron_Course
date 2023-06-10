#include<stdio.h>
int main(){
    int lines,stars,spaces;
    scanf("%d",&lines);
    spaces=lines-1;
    stars = 1;

//     for printing this pattern:
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
    for(int i=1;i<=(lines*2)-1;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
        if(i<lines){
            spaces--;
            stars=stars+2;
        }
        else{
            spaces++;
            stars=stars-2;
        }
    }
}