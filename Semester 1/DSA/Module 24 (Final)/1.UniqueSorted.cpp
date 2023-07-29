#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        list<int> list1;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            list1.push_back(value);
        }
        set<int> s;
        for (auto it = list1.begin(); it != list1.end(); it++)
        {
            s.insert(*it);
        }
        list1.clear();
        for (auto it = s.begin(); it != s.end(); it++)
        {
            list1.push_back(*it);
        }
        list1.sort(greater<int>());

        for (auto it = list1.begin(); it != list1.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}
