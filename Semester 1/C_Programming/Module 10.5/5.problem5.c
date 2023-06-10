// D. Strings
#include <stdio.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    int i = 0, j = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }
    printf("%d %d\n", i, j);
    int x=0;
    while(a[x]!='\0'){
        printf("%c",a[x]);
        x++;
    }
    int y=0;
    while(b[y]!='\0'){
        printf("%c",b[y]);
        y++;
    }
    printf("\n");
    char store;
    store = a[0];
    a[0] = b[0];
    b[0] = store;

    for (int x = 0; x < i; x++)
    {
        printf("%c", a[x]);
    }
    printf(" ");
    for (int y = 0; y < j; y++)
    {
        printf("%c", b[y]);
    }
}
