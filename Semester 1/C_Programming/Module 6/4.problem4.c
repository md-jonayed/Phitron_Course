// E. Max
#include<stdio.h>
int main(){
    int noOfValues;
    int max=0;
    scanf("%d",&noOfValues);
    for(int i=1;i<=noOfValues;i++){
        int number;
        scanf("%d",&number);
        if(number>=max){
            max = number;
        }
    }
    printf("%d\n",max);

}