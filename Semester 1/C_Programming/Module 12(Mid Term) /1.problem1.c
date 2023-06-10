// You will be given an integer array A of size N. You need to count the number of even elements and the number of odd elements in the array and print them.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int number[size];
    for(int i=0;i<size;i++){
        scanf("%d",&number[i]);
    }
    int oddCount=0,evenCount=0;
    for(int i=0;i<size;i++){
        if(number[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    printf("%d %d\n",evenCount,oddCount);
}
