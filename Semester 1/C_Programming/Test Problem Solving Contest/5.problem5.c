#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testCases,j=0,k=0;
    scanf("%d",&testCases);
    for(int i =1;i<=testCases;i++){
        int size;
        scanf("%d",&size);
        int a[size];
        for(j=0;j<size;j++){
            scanf("%d",&a[j]);
        }
        
        int num;
        int flag=1;
        scanf("%d",&num);
        for(k=0;k<size;k++){
            if(num==a[k]){
                flag=1;
                break;
            }
            else{
                flag =0;
            }
        }
        if(flag==0){
            printf("Case %d: Not Found\n",i);   
        }
        else{
            printf("Case %d: %d\n",i,k+1);
        }
    }
}
