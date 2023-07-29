#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int b[size];
    for (int i = 0; i < size; i++)
    {
        cin >> b[i];
    }
    vector<int> v(b, b + size);
    v.insert(v.end(), a, a + size);

    for (int val : v)
    {
        cout << val << " ";
    }
}
