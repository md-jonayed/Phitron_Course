#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<long long> dp(N, -1);
int main()
{
    int n;
    cin >> n;
    int cost[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    dp[1] = 0;
    dp[2] = abs(cost[2] - cost[1]);
    for (int i = 3; i <= n; i++)
    {
        dp[i] = min((dp[i - 2] + abs(cost[i - 2] - cost[i])), (dp[i - 1] + abs(cost[i - 1] - cost[i])));
    }
    cout << dp[n] << endl;
    return 0;
}