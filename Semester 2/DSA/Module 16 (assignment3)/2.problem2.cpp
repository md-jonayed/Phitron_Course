#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int value;
        cin >> value;
        s.push(value);
    }

    while (m--)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    list<int> l1;
    list<int> l2;

    while (!q.empty())
    {
        l1.push_back(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        l2.push_back(s.top());
        s.pop();
    }

    if (l1.size() == l2.size())
    {
        int flag = 0;
        while (!l1.empty() && !l2.empty())
        {
            if (l1.front() == l2.front())
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            l1.pop_front();
            l2.pop_front();
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}