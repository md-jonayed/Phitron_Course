#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        int x = 0;
        bool ans = false;
        for (char c : a)
        {
            if (b[x] == c)
            {
                x++;
            }
            if (x == b.size())
            {
                ans = true;
                break;
            }
        }
        if (ans == true)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
