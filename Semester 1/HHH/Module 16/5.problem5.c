#include<stdio.h>

int is_palindrome(char *s){
    int flag = 0,i=0,count=0;

    while(*(s+i)!='\0'){
        count++;
        i++;
    }
    printf("%d\n",i);
    for(int i=0;i<count/2;i++){
        if((*(s+i))== (*(s+(count-1)-i))){
            flag=1;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    char s[1001];
    scanf("%s",s);
    int result = is_palindrome(s);
    if(result==1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}