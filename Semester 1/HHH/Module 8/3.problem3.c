// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of even numbers and the sum of odd numbers separated by a space.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    int evenSum=0, oddSum=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        int number;
        scanf("%d",&number);
        if(number%2!=0){
            oddSum = oddSum+number;
        }
        else{
            evenSum = evenSum + number;
        }
    }
    
    printf("%d %d\n",evenSum,oddSum);
}
