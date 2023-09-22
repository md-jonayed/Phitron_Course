#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j;
            }
            cout << endl;
        }
        else if (i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << n;
            }

            cout << endl;
        }
        else
        {
            cout << i;
            for (int k = 1; k <= (n - 2); k++)
            {
                cout << " ";
            }
            cout << n;

            cout << endl;
        }
    }
    return 0;
}