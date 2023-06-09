#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d",&size);
    int age[size];
    for(int i=0;i<size;i++){
        scanf("%d",&age[i]);
    }
    if(size%2==0){
        for(int i=0;i<size-1;i++){
            for(int  j=i+1;j<size;j++){
                if(age[i]>age[j]){
                    int temp = age[i];
                    age[i] = age[j];
                    age[j] = temp;
                }
            }
        }
        printf("%d %d\n",age[(size-1)/2],age[((size-1)/2)+1]);
    }
    else{
        for(int i=0;i<size-1;i++){
            for(int  j=i+1;j<size;j++){
                if(age[i]>age[j]){
                    int temp = age[i];
                    age[i] = age[j];
                    age[j] = temp;
                }
            }
        }
        printf("%d\n",age[(size-1)/2]);
    }
}
