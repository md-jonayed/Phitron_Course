// F. Reversing
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

    for (auto it = v.end() - 1; it >= v.begin(); it--)
    {
        cout << *it << " ";
    }
}