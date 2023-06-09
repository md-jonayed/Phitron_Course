#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int sizeOfA=strlen(a);
    for(int i=0;i<=strlen(b);i++){
        a[sizeOfA] = b[i];
        sizeOfA++;
    }
    printf("%s %s\n",a,b);
}