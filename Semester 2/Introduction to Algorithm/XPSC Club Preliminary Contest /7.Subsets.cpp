#include <bits/stdc++.h>
using namespace std;
const long long N = 1e9 + 7;
int dp[1005][1005];
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s;
        cin >> s;
        dp[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
                    if (dp[i][j] >= N)
                    {
                        dp[i][j] = dp[i][j] % N;
                    }
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout << dp[n][s];
    }
    return 0;
}