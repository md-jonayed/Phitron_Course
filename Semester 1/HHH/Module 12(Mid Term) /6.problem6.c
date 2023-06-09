// You will given an integer array A and the size N. You will also be given an integer value X. You need to tell how many times X was appeared in the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    
    int count=0;
    
    for(int i=0;i<size;i++){
        if(a[i]==x){
            count++;
        }
    }
    
    printf("%d\n",count);
}
