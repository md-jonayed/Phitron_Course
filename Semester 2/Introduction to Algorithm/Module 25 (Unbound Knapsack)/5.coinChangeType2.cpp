#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int amt;
    cin >> amt;
    int dp[n + 1][amt + 1];
    dp[0][0] = 0;
    for (int i = 1; i <= amt; i++)
    {
        dp[0][i] = (INT_MAX / 2);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amt; j++)
        {
            if (coins[i - 1] <= j)
            {
                dp[i][j] = min(dp[i][j - coins[i - 1]] + 1, dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][amt] << endl;
    return 0;
}