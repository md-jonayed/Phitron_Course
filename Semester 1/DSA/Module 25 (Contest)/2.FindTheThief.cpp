#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int frq[100] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            frq[a[i]]++;
        }
        for (int i = 0; i < 100; i++)
        {
            if (frq[i] % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int findThiefPearl(int n, int arr[])
// {
//     unordered_map<int, int> freq;

//     for (int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (freq[arr[i]] % 2 != 0)
//         {
//             return arr[i];
//         }
//     }

//     return -1; // If the thief's pearl is not found (should not happen in this problem).
// }

// int main()
// {
//     int testcases;
//     cin >> testcases;

//     for (int i = 1; i <= testcases; i++)
//     {
//         int n;
//         cin >> n;

//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int thiefPearl = findThiefPearl(n, arr);
//         cout << thiefPearl << endl;
//     }

//     return 0;
// }
