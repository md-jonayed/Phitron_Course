// C. Even, Odd, Positive and Negative
#include <stdio.h>
#include <math.h>
int main()
{
    int noOfValues, even, odd, positive, negative;
    even = odd = positive = negative = 0;
    scanf("%d", &noOfValues);
    for (int i = 1; i <= noOfValues; i++)
    {
        int number;
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
}