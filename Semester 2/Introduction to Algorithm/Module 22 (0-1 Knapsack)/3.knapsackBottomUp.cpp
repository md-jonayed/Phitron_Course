#include <bits/stdc++.h>
using namespace std;

int main()
{
    int element, bagSize;
    cin >> element >> bagSize;
    int weight[element];
    int profit[element];
    for (int i = 0; i < element; i++)
    {
        cin >> weight[i];
    }

    for (int i = 0; i < element; i++)
    {
        cin >> profit[i];
    }

    int dp[element + 1][bagSize + 1];

    for (int i = 0; i <= element; i++)
    {
        for (int j = 0; j <= bagSize; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= element; i++)
    {
        for (int j = 1; j <= bagSize; j++)
        {

            if (weight[i - 1] <= j)
            {
                int op1 = dp[i - 1][j - weight[i - 1]] + profit[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= element; i++)
    {
        for (int j = 0; j <= bagSize; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}