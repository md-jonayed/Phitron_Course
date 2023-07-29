#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int value;
    Node *next;
    Node(int value)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        sz--;
        if (sz == 0)
        {
            cout << "Stack is empty" << endl;
        }
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        if (sz == 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else
        {
            return tail->value;
        }
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
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
    myStack stack1, stack2;
    cout << "enter stack size for stack 1 : ";
    int stackSize1;
    cin >> stackSize1;
    for (int i = 0; i < stackSize1; i++)
    {
        int value;
        cout << "enter stack elements : ";
        cin >> value;
        stack1.push(value);
    }
    cout << "enter stack size for stack 2 : ";
    int stackSize2;
    cin >> stackSize2;

    for (int i = 0; i < stackSize2; i++)
    {
        int value;
        cout << "enter stack elements : ";
        cin >> value;
        stack2.push(value);
    }
    bool flag = false;
    if (stack1.size() == stack2.size())
    {
        while (!stack1.empty())
        {
            if (stack1.top() == stack2.top())
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            stack1.pop();
            stack2.pop();
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
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}