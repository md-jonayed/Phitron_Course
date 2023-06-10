// E. Count
#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    int i = 0, sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int d = a[i] - '0';
        sum = sum + d;
    }
    printf("%d\n", sum);
}