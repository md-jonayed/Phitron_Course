// #include<stdio.h>
// void passByValue(int x){
//     x = 100;
// }
// int main(){
//     int x;
//     scanf("%d",&x);
//     printf("before passing the value : %d\n",x);
//     passByValue(x);
//     printf("after passing the value : %d\n",x);

// }

#include<stdio.h>
void passByRefernec(int *a){
    *a = 100;
}

int main(){
    int a;
    scanf("%d",&a);
    printf("before passing the refernece : %d\n",a);
    passByRefernec(&a);
    printf("after passing the refernece : %d\n",a);
}