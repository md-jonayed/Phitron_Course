#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size1;
    cin >> size1;
    vector<int> v1(size1);
    for (int i = 0; i < size1; i++)
    {
        cin >> v1[i];
    }

    int size2;
    cin >> size2;
    vector<int> v2(size2);
    for (int i = 0; i < size2; i++)
    {
        cin >> v2[i];
    }

    int index;
    cin >> index;

    v1.insert(v1.begin() + index, v2.begin(), v2.end());
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << v1[i] << " ";
    }
}
