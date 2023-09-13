#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int x = 0;
    bool ans = false;
    for (char c : b)
    {
        if (a[x] == c)
        {
            x++;
        }
        if (x == a.size())
        {
            ans = true;
            break;
        }
    }
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