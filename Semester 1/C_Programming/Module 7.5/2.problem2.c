// B. Searching
#include<stdio.h>
int main(){
    int numberOfElements;
    scanf("%d",&numberOfElements);
    int a[numberOfElements];

    for(int i=0;i<numberOfElements;i++){
        scanf("%d",&a[i]);
    }
    int x;
    int flag = -1;
    scanf("%d",&x);
    for(int i=0;i<numberOfElements;i++){
        if(x==a[i]){
            printf("%d\n",i);
            flag = 1;
            break;
        }
    }
    if(flag==-1){
        printf("%d\n",flag);
    }
}