#include<stdio.h>
int main(){
    int lines,spaces,stars;
    scanf("%d",&lines);
    spaces = lines-1;
    stars = 1;

    for(int i=1;i<=2*lines-1;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("%d",j);
        }
        printf("\n");
        if(i<lines){
            spaces--;
            stars=stars+2;
        }
        else{
            spaces++;
            stars = stars -2;
        }
    }
}