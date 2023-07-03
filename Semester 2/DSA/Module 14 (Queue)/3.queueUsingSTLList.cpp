#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> list1;
    void push(int value)
    {
        list1.push_back(value);
    }
    void pop()
    {
        if (list1.size() != 0)
        {
            list1.pop_front();
        }
        else
        {
            cout << "queue is empty" << endl;
        }
    }
    int front()
    {
        if (list1.size() != 0)
        {
            return list1.front();
        }
        else
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
    }
    bool empty()
    {
        if (list1.empty() == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int size()
    {
        return list1.size();
    }
};
int main()
{
    myQueue q;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}