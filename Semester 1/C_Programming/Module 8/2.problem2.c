// Problem Statement

// You will be given an integer N. If N is a negative number or zero print from N to 1, otherwise print from 1 to N.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d",&number);
    if(number<0){
        for(int i=number;i<=1;i++){
            printf("%d ",i);
        }   
    }
    else if(number==0){
        for(int i=number;i<=1;i++){
            printf("%d ",i);
        }
    }
    else{
        for(int i=1;i<=number;i++){
            printf("%d ",i);
        }
        
    }
}
