#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    // scanf("%s",s);
    int count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        count[value]++;
    }
    // //for printing all values a-z
    // for(int i=0;i<26;i++){
    //     if(count[i]!=0){
    //         printf("%c -> %d\n",i+'a',count[i]);
    //     }

    // }
    // for printing only characters available in this strings.
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        printf("%c -> %d\n", value + 'a', count[value]);
    }
    // for printing only non duplicate characters
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     int value = s[i] - 97;
    //     if (count[value] != 0)
    //     {
    //         printf("%c : %d\n", value + 'a', count[value]);
    //     }
    //     count[value] = 0;
    // }
}