// F. Equation
#include <bits/stdc++.h>
using namespace std;
long long int seriesSum(int x, int n)
{   
    long long int sum = 0;
    for (int i = 2; i <= n; i=i+2)
    {
        long long int mul=1;
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                mul = mul * x;
            }
        }
        sum = sum + mul;
    }
    return sum;
}
int main()
{
    int x, n;
    cin >> x >> n;
    long long int result = seriesSum(x, n);
    cout << result << endl;
    return 0;
}
