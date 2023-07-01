#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list1;
    while (true)
    {
        int value;
        cin >> value;
        if (value < 0)
        {
            break;
        }
        else
        {
            list1.push_back(value);
        }
    }
    list1.sort();
    list1.unique();
    for (int val : list1)
    {
        cout << val << " ";
    }
    return 0;
}