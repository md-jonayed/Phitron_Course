#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    cout << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}