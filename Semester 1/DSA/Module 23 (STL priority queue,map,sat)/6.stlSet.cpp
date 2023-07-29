#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        s.insert(value);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    if (s.count(2))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << s.count(1) << endl;
    return 0;
}