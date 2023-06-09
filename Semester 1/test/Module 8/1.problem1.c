// Problem Statement

// You will be given a positive integer N. You need to print "I Love Assignment" N times without the quotation mark.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        printf("I Love Assignment\n");
    }
}
