// C. Replacement
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            v[i] = 1;
        }
        else if (v[i] == 0)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 2;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
}