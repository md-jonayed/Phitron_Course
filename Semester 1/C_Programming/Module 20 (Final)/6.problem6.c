#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int testCases;
    int p = 0, t = 0;
    scanf("%d", &testCases);
    for (int i = 1; i <= testCases; i++)
    {
        int tiger, pathan;
        scanf("%d %d", &tiger, &pathan);
        if (tiger > pathan)
        {
            t++;
        }
        else if(tiger<pathan)
        {
            p++;
        }
        else if(tiger==pathan){
            continue;
        }
    }
    if (t == p)
    {
        printf("Draw\n");
    }
    else if (t > p)
    {
        printf("Tiger\n");
    }
    else if(t<p){
        printf("Pathan\n");
    }
}
