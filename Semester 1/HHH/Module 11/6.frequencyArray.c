#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<size;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("%d\n",max);
    int count[max];
    for(int i=0;i<max;i++){
        count[i]=0;
    }
    for(int i=0;i<size;i++){
        int val = a[i];
        count[val]++;
    }
    for(int i=0;i<=max;i++){
        printf("%d -> %d\n",i,count[i]);
    }

}