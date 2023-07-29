#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stack1;
    queue<int> queue1;
    cout << "enter stack size : ";
    int stackSize;
    cin >> stackSize;
    cout << "enter queue size : ";
    int queueSize;
    cin >> queueSize;
    for (int i = 0; i < stackSize; i++)
    {
        cout << "enter elements into stack : ";
        int value;
        cin >> value;
        stack1.push(value);
    }

    for (int i = 0; i < queueSize; i++)
    {
        cout << "enter elements into queue : ";
        int value;
        cin >> value;
        queue1.push(value);
    }
    if (stack1.size() != queue1.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;
        while (!stack1.empty())
        {
            if (stack1.top() == queue1.front())
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            stack1.pop();
            queue1.pop();
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}