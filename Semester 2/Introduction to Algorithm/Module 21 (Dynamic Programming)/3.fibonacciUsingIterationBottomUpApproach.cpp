#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int a[num + 1];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[num] << endl;
    return 0;
}