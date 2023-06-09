// L. Summation
#include <stdio.h>

long long int sum(long long int a[], long long int size, long long int index)
{
    long long int total = a[index];
    if (index == size)
    {
        return 0;
    }
    total = total + sum(a, size, index + 1);

    return total;
}
int main()
{
    long long int size;
    scanf("%lld", &size);
    long long int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int result = sum(a,size,0);
    printf("%lld\n",result);
}