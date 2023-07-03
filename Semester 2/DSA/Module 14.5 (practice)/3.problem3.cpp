#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stack1;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        stack1.push(value);
    }
    stack<int> newStack;
    while (!stack1.empty())
    {
        newStack.push(stack1.top());
        stack1.pop();
    }
    while (!newStack.empty())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    return 0;
}