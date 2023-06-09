#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    fgets(s,1001,stdin);
    int lowerCaseCount=0,uppercaseCount=0,spaceCount=0,i=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            uppercaseCount++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            lowerCaseCount++;
        }
        else if(s[i]==' '){
            spaceCount++;
        }
        i++;
    }
    
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",uppercaseCount,lowerCaseCount,spaceCount);
    
}
