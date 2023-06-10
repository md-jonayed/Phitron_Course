// You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string[1001];
    scanf("%s",string);
    int vowelCount=0;
    for(int i=0;i<strlen(string);i++){
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
            vowelCount++;
        }
    }
    printf("%d\n",vowelCount);
}
