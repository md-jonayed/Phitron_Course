#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0)
    {
        if (a == b && a == c)
        {
            cout << "Yes" << endl;
        }
        else if (b == a && b == c)
        {
            cout << "Yes" << endl;
        }

        else if (c == a && c == b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}