// S. Search In Matrix
#include<stdio.h>
int main(){
    long long int row,col;
    scanf("%lld %lld",&row,&col);
    long long int a[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    long long int x;
    scanf("%lld",&x);

    int flag =0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(x==a[i][j]){
                flag=1;
            }
        }
    }

    if(flag == 1){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }
}