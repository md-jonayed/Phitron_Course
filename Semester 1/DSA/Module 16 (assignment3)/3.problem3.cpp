#include <bits/stdc++.h>
using namespace std;

int main()
{
    int queries;
    cin >> queries;
    queue<string> q;
    for (int i = 1; i <= queries; i++)
    {
        int command;
        cin >> command;
        if (q.empty() && command == 1)
        {
            cout << "Invalid" << endl;
        }
        else if (command == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (command == 1)
        {
            cout << q.front() << endl;
            q.pop();
        }
    }
    return 0;
}