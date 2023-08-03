#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, , 5};
    v.erase(find(v.begin(), v.end(), 5));
    for (int val : v)
    {
        cout << val << endl;
    }
    return 0;
}