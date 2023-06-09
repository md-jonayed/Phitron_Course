// I. Palindrome
#include<stdio.h>
int main(){
    char a[1001];
    scanf("%s",a);
    int size=0;
    while(a[size]!='\0'){
        size++;
    }
    int temp=size;
    
    char b[1001];
    int i=0;
    while(temp!=0){
        b[i]=a[temp-1];
        i++;
        temp--;
    }
    
    int k=0,flag=0;
    while(k<size){
        if(a[k]!=b[k]){
            flag=1;
            break;
        }
        k++;
    }
    if(flag==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   
}