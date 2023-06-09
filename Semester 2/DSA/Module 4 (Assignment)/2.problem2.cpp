#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long size;
    cin >> size;
    long long a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    long long prefix[size];
    prefix[0] = a[0];
    for (int i = 1; i < size; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }
}
