#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int unboundKnapsack(int n, int sum, int value[], int weight[])
{
    if (n == 0 || sum == 0)
    {
        return 0;
    }
    if (dp[n][sum] != 0)
    {
        return dp[n][sum];
    }
    if (weight[n - 1] <= sum)
    {
        int c1 = unboundKnapsack(n, sum - weight[n - 1], value, weight) + value[n - 1];
        int c2 = unboundKnapsack(n - 1, sum, value, weight);
        return dp[n][sum] = max(c1, c2);
    }
    else
    {
        return dp[n][sum] = unboundKnapsack(n - 1, sum, value, weight);
    }
}
int main()
{
    int n;
    cin >> n;
    int value[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    int sum;
    cin >> sum;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    cout << unboundKnapsack(n, sum, value, weight);
    return 0;
}