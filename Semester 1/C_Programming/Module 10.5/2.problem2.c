// F. Way Too Long Words
#include<stdio.h>
#include<string.h>
int main(){
    int testCases;
    scanf("%d",&testCases);
    for(int i =0;i<testCases;i++){
        char ch[1001];
        scanf("%s",ch);
        int count=0;
        if(strlen(ch)>10){
            int size= strlen(ch);
            for(int i=1;i<size-1;i++){
                count++;
            }
            printf("%c%d%c\n",ch[0],count,ch[size-1]);
        }
        else{
            printf("%s\n",ch);
        }
    }
} 