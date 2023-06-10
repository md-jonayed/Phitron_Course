#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testCases;
    scanf("%d",&testCases);
    for(int i=1;i<=testCases;i++){
        int sum,a,b,c,d;
        scanf("%d %d %d %d",&sum,&a,&b,&c);
        d = sum-(a+b+c);
        printf("%d\n",d);
    }
}
