// G. Katryoshka
#include<stdio.h>
int main(){
    long long  int eye,mouth,body, murti=0;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    long long int min=0;
    if(eye<mouth && eye<body){
        min = eye;
    }
    else if(mouth<eye && mouth<body){
        min = mouth;
    }
    else{
        min = body;
    }
    murti = murti + min;
    eye = eye-min;
    body = body-min;
    mouth = mouth -min;

    if((eye/2) > body ){
        min = body;
    }
    else{
        min = eye/2;
    }
    murti = murti+min;
    printf("%lld\n",murti);
}