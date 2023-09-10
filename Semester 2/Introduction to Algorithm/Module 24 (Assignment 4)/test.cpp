// #include <bits/stdc++.h>
// using namespace std;

// bool makeit(int n)
// {
//     if (n == 1)
//     {
//         return true;
//     }
//     if (n <= 0)
//     {
//         return false;
//     }
//     return (n % 2 != 0 && makeit(n - 3)) || (n % 2 == 0 && makeit(n / 2));
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         if (makeit(n) == true)
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

// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if it's possible to divide chocolates equally
// bool canDivideChocolates(int n, vector<int> &chocolates)
// {
//     int totalChocolates = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalChocolates += chocolates[i];
//     }

//     // If the total number of chocolates is odd, we can't divide them equally
//     if (totalChocolates % 2 != 0)
//     {
//         return false;
//     }

//     int halfTotal = totalChocolates / 2;
//     vector<vector<bool>> dp(n + 1, vector<bool>(halfTotal + 1, false));

//     // Base case: If there are no chocolates, we can't divide them equally
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = true;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= halfTotal; j++)
//         {
//             if (j >= chocolates[i - 1])
//             {
//                 dp[i][j] = dp[i - 1][j] || dp[i - 1][j - chocolates[i - 1]];
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }

//     return dp[n][halfTotal];
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n;
//         cin >> n;
//         vector<int> chocolates(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> chocolates[i];
//         }

//         if (canDivideChocolates(n, chocolates))
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
