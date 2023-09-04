#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int kanpsack(int size, int bagSize, int weight[], int profit[])
{
    if (size == 0 || bagSize == 0)
    {
        return 0;
    }
    if (dp[size][bagSize] != -1)
    {
        return dp[size][bagSize];
    }
    if (weight[size - 1] <= bagSize)
    {
        int op1 = kanpsack(size - 1, bagSize - weight[size - 1], weight, profit) + profit[size - 1];
        int op2 = kanpsack(size - 1, bagSize, weight, profit);
        return dp[size][bagSize] = max(op1, op2);
    }
    else
    {
        return dp[size][bagSize] = kanpsack(size - 1, bagSize, weight, profit);
    }
}
int main()
{
    int size;
    cin >> size;

    int bagSize;
    cin >> bagSize;
    int weight[size];
    int profit[size];
    for (int i = 0; i < size; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> profit[i];
    }

    for (int i = 0; i < size + 1; i++)
    {
        for (int j = 0; j < bagSize + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << kanpsack(size, bagSize, weight, profit) << endl;
    return 0;
}