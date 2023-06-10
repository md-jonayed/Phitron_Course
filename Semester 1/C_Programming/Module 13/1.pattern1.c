#include <stdio.h>
int main()
{
    // for this patter:
// *
// **
// ***
// ****
// *****
    int lines, star, space;
    scanf("%d", &lines);
    star = 1;
    space = lines - 1;
    // for (int i = 1; i <= lines; i++)
    // {
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     star++;
    // }

//for this pattern :
//     *
//    **
//   ***
//  ****
// *****
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}