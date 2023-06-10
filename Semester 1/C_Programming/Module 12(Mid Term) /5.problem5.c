// You will be given two positive integer N and K. You need to print from 1 to N, and you need to do this K times.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++){
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
