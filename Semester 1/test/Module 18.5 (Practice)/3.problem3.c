// C. Print from N to 1
#include <stdio.h>

void print(int number)
{
    if (number == 1)
    {
        printf("%d", number);
        return;
    }
    printf("%d ", number);
    print(number - 1);
}
int main()
{
    int number;
    scanf("%d", &number);
    print(number);
}