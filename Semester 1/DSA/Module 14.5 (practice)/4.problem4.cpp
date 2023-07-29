#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int size;
    cout << "enter queue size : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter value : ";
        int value;
        cin >> value;
        q.push(value); // 1,2,3,4,5
        }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front()); // 5,4,3,2,1
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}