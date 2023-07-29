#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
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
            cout << pq.top();
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
    return 0;
}