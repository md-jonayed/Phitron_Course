#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, testCases;
    cin >> size >> testCases;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    sort(a, a + size);
    while (testCases--)
    {
        int x;
        cin >> x;
        int mid;
        int left = 0;
        int right = size - 1;

        int flag = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            if (x > a[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (flag == 0)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }

    return 0;
}