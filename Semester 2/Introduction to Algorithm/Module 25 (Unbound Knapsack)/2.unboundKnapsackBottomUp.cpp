#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s;
    cin >> s;
    int w[n];
    int v[n];
    int dp[n + 1][s + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> w[j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i][j - w[i - 1]] + v[i - 1], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}