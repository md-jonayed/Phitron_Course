#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long size, testCases;
    cin >> size >> testCases;
    long long a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    long long prefix[size];
    prefix[0] = a[0];
    for (int i = 1; i < size; i++)
    {
        prefix[i] = a[i] + prefix[i - 1];
    }
    while (testCases--)
    {
        long long left, right;
        cin >> left >> right;
        left--;
        right--;
        long long sum;
        if (left == 0)
        {
            sum = prefix[right];
        }
        else
        {
            sum = prefix[right] - prefix[left - 1];
        }
        cout << sum << endl;
    }
    return 0;
}