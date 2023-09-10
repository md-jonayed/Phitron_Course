// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, s;
//     cin >> n >> s;
//     int val[n], w[n];
//     int dp[n + 1][s + 1];
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= s; j++)
//         {
//             if (i == 0 || j == 0)
//                 dp[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> w[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             if (w[i - 1] <= j)
//             {
//                 dp[i][j] = max(val[i - 1] + dp[i][j - w[i - 1]], dp[i - 1][j]);
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     cout << dp[n][s] << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int s, int val[], int w[])
{
    if (n == 0 || s == 0)
        return 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (w[n - 1] <= s)
    {
        int ch1 = val[n - 1] + unbounded_knapsack(n, s - w[n - 1], val, w);
        int ch2 = unbounded_knapsack(n - 1, s, val, w);
        return dp[n][s] = max(ch1, ch2);
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n - 1, s, val, w);
    }
}
int main()
{
    int n;
    cin >> n;
    int val[n], w[n];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        w[i] = i + 1;
    }
    cout << unbounded_knapsack(n, n, val, w) << endl;
    return 0;
}