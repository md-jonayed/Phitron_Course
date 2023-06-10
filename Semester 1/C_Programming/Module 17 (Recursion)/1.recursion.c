#include<stdio.h>
void fun(){
    printf("fun function \n");
    fun();
}
int main(){
    fun();
    //this will call the fun function for infinite time 
}