// G. Conversion
#include<stdio.h>
int main(){
    char s[1000001];
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        else if(s[i]==','){
            s[i]=' ';
        }
        i++;
    }
    int j=0;
    while(s[j]!='\0'){
        printf("%c",s[j]);
        j++;
    }
}