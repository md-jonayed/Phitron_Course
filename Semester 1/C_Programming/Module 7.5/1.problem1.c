// A. Summation
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int ar[size];
    long long int sum=0;
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    if(sum<0){
        printf("%lld\n",(sum*-1));
    }
    else{
        printf("%lld\n",sum);
    }
}