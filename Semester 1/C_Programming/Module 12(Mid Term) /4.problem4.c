// You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    scanf("%s",s);
    int uppercaseCount=0,lowercaseCount=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z'){
            uppercaseCount++;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            lowercaseCount++;
        }
    }
    printf("%d %d",uppercaseCount,lowercaseCount);
}
