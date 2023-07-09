#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q1, int k)
{
    stack<int> s;
    queue<int> q2;
    int size = q1.size();
    for (int i = 0; i < k; i++)
    {
        s.push(q1.front());
        q1.pop();
    }
    for (int i = k; i < size; i++)
    {
        q2.push(q1.front());
        q1.pop();
    }
    while (!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
    return q1;
}
