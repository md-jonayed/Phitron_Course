// B. Even Numbers
#include<stdio.h>
int main(){
    int number;
    int num=-1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
        if(number==0 || number ==1){
            printf("%d\n",num);
        }
    }
}