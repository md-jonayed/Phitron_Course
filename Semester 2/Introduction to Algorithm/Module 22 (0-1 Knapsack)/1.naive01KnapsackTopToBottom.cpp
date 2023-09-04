#include <bits/stdc++.h>
using namespace std;
int knapsack(int size, int bagSize, int weight[], int profit[])
{
    if (size == 0 || bagSize == 0)
    {
        return 0;
    }
    if (weight[size - 1] <= bagSize)
    {
        int option1 = knapsack(size - 1, bagSize - weight[size - 1], weight, profit) + profit[size - 1];
        int option2 = knapsack(size - 1, bagSize, weight, profit);
        return max(option1, option2);
    }
    else
    {
        return knapsack(size - 1, bagSize, weight, profit);
    }
}
int main()
{
    int size;
    cin >> size;
    int weight[size], profit[size];
    for (int i = 0; i < size; i++)
    {
        cin >> weight[i];
    }

    for (int i = 0; i < size; i++)
    {

        cin >> profit[i];
    }
    int bagSize;
    cin >> bagSize;

    cout << knapsack(size, bagSize, weight, profit);
    return 0;
}
