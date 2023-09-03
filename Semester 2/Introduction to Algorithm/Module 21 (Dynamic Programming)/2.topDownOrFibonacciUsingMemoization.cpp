#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<long long> dp(N, -1);
int fib(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    if (dp[num] != -1)
    {
        return dp[num];
    }
    dp[num] = fib(num - 1) + fib(num - 2);
    return dp[num];
}
int main()
{
    int num;
    cin >> num;
    cout << fib(num) << endl;
    return 0;
}