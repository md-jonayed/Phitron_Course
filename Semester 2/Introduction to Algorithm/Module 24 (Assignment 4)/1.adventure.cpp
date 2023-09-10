#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];

int knapsack(int n, int bsize, int weights[], int values[])
{
    if (n == 0 || bsize == 0)
    {
        return 0;
    }
    if (dp[n][bsize] != -1)
    {
        return dp[n][bsize];
    }
    if (weights[n - 1] <= bsize)
    {
        int take = knapsack(n - 1, bsize - weights[n - 1], weights, values) + values[n - 1];
        int donttake = knapsack(n - 1, bsize, weights, values);
        return dp[n][bsize] = max(take, donttake);
    }
    else
    {
        return dp[n][bsize] = knapsack(n - 1, bsize, weights, values);
    }
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        int bsize;
        cin >> bsize;
        int weights[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
        }
        int values[n];
        for (int i = 0; i < n; i++)
        {
            cin >> values[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= bsize; j++)
            {
                dp[i][j] = -1;
            }
        }
        int ans = knapsack(n, bsize, weights, values);
        cout << ans << endl;
    }

    return 0;
}