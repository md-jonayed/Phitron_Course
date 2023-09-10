#include <bits/stdc++.h>
using namespace std;
// const int N = 1e5 + 5;
// int dp[N];
bool mul(int n, long long num)
{
    if (n == num)
    {
        return true;
    }
    if (n > num)
    {
        return false;
    }
    bool a = mul(n * 10, num);
    bool b = mul(n * 20, num);
    return a || b;
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        long long num;
        cin >> num;
        bool result = mul(1, num);
        if (result == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
