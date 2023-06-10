// A. Add
#include<stdio.h>
int summation(int x,int y){
    return (x+y);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",summation(x,y));
}