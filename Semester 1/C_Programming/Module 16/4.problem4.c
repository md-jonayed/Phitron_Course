#include <stdio.h>
// 1. Has Return + Parameter
int sum(int a, int b)
{
    return a + b;
}

// 2. Has Return + No Parameter
int power()
{
    int number;
    int pow;
    scanf("%d %d", &number, &pow);
    int result = 1;
    for (int i = 1; i <= pow; i++)
    {
        result = result * number;
    }
    return result;
}

// 3. No Return + Parameter
void Ascii(char c)
{
    int d = c;
    printf("Ascii value is : %d\n", d);
}

// 4. No Return + No Parameter
void multiplication_table()
{
    int number;
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("for // 1. Has Return + Parameter\n");
    printf("result : %d\n", result);

    printf("for // 2. Has Return + No Parameter\n");
    printf("power : %d\n", power());

    printf("for // 3. No Return + Parameter\n");
    char c;
    scanf(" %c", &c);
    Ascii(c);

    printf("for // 4. No Return + No Parameter\n");
    multiplication_table();
}