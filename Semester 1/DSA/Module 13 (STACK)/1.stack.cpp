#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        if (v.size() != 0)
        {
            v.pop_back();
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    int top()
    {
        if (v.size() != 0)
        {
            return v.back();
        }
        else
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
    }
    bool empty()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
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
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}