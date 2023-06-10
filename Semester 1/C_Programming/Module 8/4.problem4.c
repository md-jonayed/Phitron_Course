// Problem Statement

// You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int a[size];
    int index,value;
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&index,&value);
    a[index]=value;
    for(int i=size-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
