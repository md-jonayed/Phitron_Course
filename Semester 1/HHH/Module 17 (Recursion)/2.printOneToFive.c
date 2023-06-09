#include<stdio.h>
void fun(int n){
    if(n==6){
        return;
    }
    printf("%d\n",n);
    fun(n+1);
}
int main(){
    fun(1);
}