#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b && b==c) &&(a>0 && b>0 && c>0)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
