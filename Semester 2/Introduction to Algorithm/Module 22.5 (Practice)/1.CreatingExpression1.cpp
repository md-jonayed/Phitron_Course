#include <bits/stdc++.h>
using namespace std;
int sum = 0;
bool check(int a[], int n, int x)
{
    if (n == 0)
    {
        if (sum == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    sum = sum + a[n - 1];
    check(a, n - 1, x);
    sum = sum - a[n - 1];
    check(a, n - 1, x);
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ans = check(a, n, x);
    if (ans == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}