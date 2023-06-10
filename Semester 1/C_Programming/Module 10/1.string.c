#include<stdio.h>
#include<string.h>
int main(){
    char a[5];
    for(int i=0;i<5;i++){
        scanf("%c",&a[i]);
    }


    for(int i=0;i<5;i++){
        printf("%c\n",a[i]);
    }

    char b[5] = {'a','b','c','d','e'};
    printf("%s\n",b);

    char c[]={'w','x','y','z','\0'};
    printf("%s\n",c);

    char d[]="jonayed";
    printf("%s\n",d);

    char e[7]="jonayed";
    printf("%s\n",d);

    // finding the length of a string
    int size = sizeof(a)/sizeof(char);
    printf("%d\n",size);
    int sized = sizeof(d)/sizeof(char);
    printf("%d\n",sized); // it will give output size+1 because its including the null"\0" character in count
    int count=0;
    for(int i=0;i<=sized;i++){
        if(d[i]=='\0'){
            break;
        }
        count++;
    }
    printf("%d\n",count);

    int countd=0;
    int i=0;
    while(d[i]!='\0'){
        countd++;
        i++;
    }
    printf("%d\n",countd);

    // or we can find it out using a function called strlen() but we need to include header file <string.h>

    printf("%lu\n",strlen(d));
}