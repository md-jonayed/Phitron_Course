#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> list1;
    void push(int value)
    {
        list1.push_back(value);
    }
    void pop()
    {
        if (list1.size() == 0)
        {
            cout << "Stack is empty insert element into list first" << endl;
        }
        else
        {
            list1.pop_back();
        }
    }
    int top()
    {
        if (list1.size() == 0)
        {
            cout << "Stack is empty insert element into list first" << endl;
            return 0;
        }
        else
        {
            return list1.back();
        }
    }
    bool empty()
    {
        if (list1.size() == 0)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
            return false;
    }
};
int main()
{
    myStack st;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    cout << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}