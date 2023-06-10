// A. Create A New String
#include<stdio.h>
int main(){
    char a[1001];
    scanf("%s",a);
    char b[1001];
    scanf("%s",b);
    int count1=0,count2=0;
    for(int i=0;i<(sizeof(a)/sizeof(char));i++){
        if(a[i]=='\0'){
            break;
        }
        count1++;
    }
    for(int i=0;i<(sizeof(b)/sizeof(char));i++){
        if(b[i]=='\0'){
            break;
        }
        count2++;
    }
    printf("%d %d\n",count1,count2);
    printf("%s %s",a,b);

}