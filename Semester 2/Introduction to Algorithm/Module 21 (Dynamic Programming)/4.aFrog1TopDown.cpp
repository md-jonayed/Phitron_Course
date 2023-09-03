#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<long long> dp(N, -1);
int solve(int cost[], int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    else if (n == 2)
    {
        dp[n] = abs(cost[2] - cost[1]);
        return dp[n];
    }
    else
    {
        int choice1 = abs(cost[n - 1] - cost[n]) + solve(cost, n - 1);
        int choice2 = abs(cost[n - 2] - cost[n]) + solve(cost, n - 2);
        dp[n] = min(choice1, choice2);
        return dp[n];
    }
}
int main()
{
    int n;
    cin >> n;
    int cost[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }

    cout << solve(cost, n) << endl;
    return 0;
}