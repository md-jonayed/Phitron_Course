#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int lcs(string a, int n, string b, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != 0)
    {
        return dp[n][m];
    }
    if (a[n - 1] == b[m - 1])
    {
        return dp[n][m] = lcs(a, n - 1, b, m - 1) + 1;
    }
    else
    {
        return dp[n][m] = max(lcs(a, n - 1, b, m), lcs(a, n, b, m - 1));
    }
}
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    memset(dp, 0, sizeof(dp));
    cout << lcs(a, n, b, m) << endl;
    return 0;
}