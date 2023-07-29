// D.Counting Elements
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
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        // v[i] = v[i] + 1;
        for (int j = 0; j < size; j++)
        {
            if (v[i] + 1 == v[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}