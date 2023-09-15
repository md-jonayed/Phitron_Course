#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

int main()
{
    long long testcases;
    cin >> testcases;

    while (testcases--)
    {
        long long n, mark;
        cin >> n >> mark;
        long long a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long m = 1000 - mark;

        long long dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = (dp[i - 1][j] + dp[i][j - a[i - 1]]);
                    if (dp[i][j] >= MOD)
                    {
                        dp[i][j] = dp[i][j] % MOD;
                    }
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][m] == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << dp[n][m] << endl;
        }
    }
    return 0;
}
