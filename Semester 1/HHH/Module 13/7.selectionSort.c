#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    // ascending order :
    // printf("Before sorting - ");
    // for(int i=0;i<size;i++){
    //     printf("%d ",a[i]);
    // }
    // printf("\n");
    // for(int i=0;i<size-1;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(a[i]>a[j]){
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }
    // printf("after sorting - ");
    // for(int i=0;i<size;i++){
    //     printf("%d ",a[i]);
    // }

    // descending order :
    printf("Before sorting - ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("after sorting - ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    
    
}