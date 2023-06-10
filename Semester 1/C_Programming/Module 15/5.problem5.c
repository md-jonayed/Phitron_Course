#include<stdio.h>
void swap_it(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    swap_it(&x,&y);
    printf("%d %d\n",x,y);
}