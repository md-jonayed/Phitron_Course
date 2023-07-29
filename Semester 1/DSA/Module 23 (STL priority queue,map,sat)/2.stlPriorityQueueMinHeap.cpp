#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            int value;
            cin >> value;
            pq.push(value);
        }
        else if (command == 2)
        {
            cout << pq.top() << endl;
        }
        else if (command == 3)
        {
            pq.pop();
        }
        else
        {
            break;
        }
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}