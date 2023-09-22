#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        long long n;
        cin >> n;
        long long h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        long long mx = INT_MIN;
        long long index1, index2;
        for (int i = 0; i < n; i++)
        {
            if (mx < h[i])
            {
                mx = h[i];
                index1 = i;
            }
        }
        mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i == index1)
            {
                continue;
            }
            else
            {
                if (mx < h[i])
                {
                    mx = h[i];
                    index2 = i;
                }
            }
        }
        if (index1 > index2)
        {
            cout << index2 << " " << index1 << endl;
        }
        else
        {
            cout << index1 << " " << index2 << endl;
        }
    }
    return 0;
}