#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int x,flag=0;
    scanf("%d",&x);
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]+a[j]==x){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}