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
    
    int max=0;
    for(int i=0;i<size;i++){
        if(max<=a[i]){
            max = a[i];
        }
    }
    
    for(int i=0;i<size;i++){
        a[i]= max - a[i];
        printf("%d ",a[i]);
    }
    
}
