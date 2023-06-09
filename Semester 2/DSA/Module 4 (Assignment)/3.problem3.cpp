#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++)
    {
        int size;
        cin >> size;
        int a[size];
        int b[size];
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
            b[j] = a[j];
        }
        sort(b, b + size);
        bool flag = false;
        for (int k = 0; k < size; k++)
        {
            if (b[k] == a[k])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}