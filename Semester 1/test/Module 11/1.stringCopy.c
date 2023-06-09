#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100],c[100],d[100];
    scanf("%s %s",a,b);
    for(int i=0;i<=strlen(b);i++){
        a[i]=b[i];
    }
    printf("%s %s\n",a,b);

    //using function :
    scanf("%s %s",c,d);
    strcpy(c,d);
    printf("%s %s\n",c,d);
}