// K. Sum Digits
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    char a[size];
    scanf("%s",a);
    int sum=0;
    for(int i=0;i<size;i++){
        int value = a[i];
        sum = sum+(a[i]-'0');
    }
    printf("%d\n",sum);
}