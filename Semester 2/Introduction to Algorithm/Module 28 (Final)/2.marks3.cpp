#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, mark;
        cin >> n >> mark;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = 1000 - mark;

        int dp[n + 1][m + 1];
        dp[0][0] = 0;
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = INT_MAX / 2;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = min(dp[i][j - a[i - 1]] + 1, dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][m] == (INT_MAX / 2))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[n][m] << endl;
        }
        memset(dp, 0, sizeof(dp));
    }
    return 0;
}