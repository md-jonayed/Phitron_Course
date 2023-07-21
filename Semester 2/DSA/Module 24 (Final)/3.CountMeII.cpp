#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int size;
        cin >> size;
        long long a[size];
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        map<long long, int> mp;
        for (int k = 0; k < size; k++)
        {
            mp[a[k]]++;
        }
        int max = INT_MIN;
        long long val;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (max <= it->second)
            {
                max = it->second;
                val = it->first;
            }
        }
        cout << val << " " << max << endl;
    }
    return 0;
}