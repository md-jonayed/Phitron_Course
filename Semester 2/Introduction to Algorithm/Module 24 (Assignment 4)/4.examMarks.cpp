// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int n, m;
//         cin >> n >> m;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int s = 1000 - m;
//         if (s == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             bool dp[n + 1][s + 1];
//             memset(dp, false, sizeof(dp));
//             dp[0][0] = true;
//             for (int i = 1; i <= m; i++)
//             {
//                 dp[i][0] = false;
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 for (int j = 0; j <= s; j++)
//                 {
//                     if (a[i - 1] <= j)
//                     {
//                         dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
//                     }
//                     else
//                     {
//                         dp[i][j] = dp[i - 1][j];
//                     }
//                 }
//             }
//             if (dp[n][s] == true)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = 1000 - m;
        if (s == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            memset(dp, false, sizeof(dp));
            dp[0][0] = true;
            for (int i = 1; i <= m; i++)
            {
                dp[i][0] = false;
            }
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][s] == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
