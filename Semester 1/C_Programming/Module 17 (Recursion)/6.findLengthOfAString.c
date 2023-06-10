#include<stdio.h>
int fun(char s[],int index){
    if(s[index]=='\0'){
        return 0;
    }
    int length = fun(s,index+1);
    return (length+1);
}

int main(){
    char s[1001];
    scanf("%s",s);
    int result = fun(s,0);
    printf("%d\n",result);
}