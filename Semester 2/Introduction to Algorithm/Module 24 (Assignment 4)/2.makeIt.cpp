// #include <bits/stdc++.h>
// using namespace std;
// bool dp[1005][1005];
// bool makeit(int current, int n)
// {
//     if (current == n)
//     {
//         return true;
//     }
//     else
//     {
//         bool op1 = makeit(current + 3, n);
//         bool op2 = makeit(current * 2, n);
//         return op1 || op2;
//     }
// }
// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int n;
//         cin >> n;
//         bool ans = makeit(1, n);
//         if (ans == true)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// bool dp[1005][1005];
// bool makeit(int current, int n)
// {
//     if (current > n)
//     {
//         return false;
//     }
//     if (current == n)
//     {
//         return true;
//     }
//     if (dp[n][current] != false)
//     {
//         return dp[n][current];
//     }

//     bool op1 = makeit(current + 3, n);
//     bool op2 = makeit(current * 2, n);
//     return dp[n][current] = op1 || op2;
// }

// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int n;
//         cin >> n;
//         memset(dp, false, sizeof(dp));
//         bool ans = makeit(1, n);
//         if (ans == true)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_N = 1005;
// bool dp[MAX_N][MAX_N];

// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int n;
//         cin >> n;

//         // Initialize the base case
//         for (int i = 0; i <= n; i++)
//         {
//             dp[i][0] = true; // Base case: Starting position is already at the destination
//         }

//         for (int j = 1; j <= n; j++)
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 dp[i][j] = false; // Initialize as false

//                 if (i + 3 <= n)
//                 {
//                     dp[i][j] |= dp[i + 3][j - 1];
//                 }
//                 if (i * 2 <= n)
//                 {
//                     dp[i][j] |= dp[i * 2][j - 1];
//                 }
//             }
//         }

//         // Check if it's possible to reach n steps away from the starting point
//         if (dp[n][n])
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool makeit(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n <= 0)
    {
        return false;
    }
    return (n % 2 != 0 && makeit(n - 3)) || (n % 2 == 0 && makeit(n / 2));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (makeit(n) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
