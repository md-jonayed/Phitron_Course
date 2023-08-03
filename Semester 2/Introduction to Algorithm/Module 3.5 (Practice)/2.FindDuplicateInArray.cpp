#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    int mx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    int frq[mx + 1] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        frq[arr[i]]++;
    }
    for (int i = 0; i <= mx; i++)
    {
        if (frq[i] > 1)
        {
            return i;
        }
    }
}
