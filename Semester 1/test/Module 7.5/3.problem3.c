// C. Replacement
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            a[i]=1;
        }
        else if(a[i]<0){
            a[i]=2;
        }
        else if(a[i]==0){
            a[i]=0;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}