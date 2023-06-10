#include <stdio.h>
void my_len(char *s);
int main()
{
    char s[1001];
    scanf("%s", s);
    my_len(s);
}
void my_len(char *s)
{
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d\n", count);
}