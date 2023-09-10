#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int rodcutting(int n, int s, int profit[], int length[])
{
    if (n == 0 || s == 0)
    {
        return 0;
    }
    if (dp[n][s] != 0)
    {
        return dp[n][s];
    }
    if (length[n - 1] <= s)
    {
        int c1 = rodcutting(n, s - length[n - 1], profit, length) + profit[n - 1];
        int c2 = rodcutting(n - 1, s, profit, length);
        return dp[n][s] = max(c1, c2);
    }
    else
    {
        return dp[n][s] = rodcutting(n - 1, s, profit, length);
    }
}
int main()
{
    int n;
    cin >> n;
    int length[n], profit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
        length[i] = i + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = 0;
        }
    }
    cout << rodcutting(n, n, profit, length);
    return 0;
}