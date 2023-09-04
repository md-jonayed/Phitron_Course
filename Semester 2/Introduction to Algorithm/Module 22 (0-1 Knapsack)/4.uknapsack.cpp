#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int element, int bagsize, int weight[], int value[])
{
    if (element == 0 || bagsize == 0)
    {
        return 0;
    }
    if (dp[element][bagsize] != -1)
    {
        return dp[element][bagsize];
    }
    if (bagsize >= weight[element - 1])
    {
        int op1 = knapsack(element - 1, bagsize - weight[element - 1], weight, value) + value[element - 1];
        int op2 = knapsack(element - 1, bagsize, weight, value);
        return dp[element][bagsize] = max(op1, op2);
    }
    else
    {
        return dp[element][bagsize] = knapsack(element - 1, bagsize, weight, value);
    }
}
int main()
{
    int element, bagsize;
    cin >> element >> bagsize;
    int weight[element], value[element];
    for (int i = 0; i < element; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for (int i = 0; i <= element; i++)
    {
        for (int j = 0; j <= bagsize; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(element, bagsize, weight, value) << endl;
    return 0;
}