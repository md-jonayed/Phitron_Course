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
            cout << "Push elements into stack first" << endl;
        }
        else
        {
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
    }
    int top()
    {
        if (sz == 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return tail->value;
        }
    }
    int size()
    {
        if (sz == 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        else
        {
            return sz;
        }
    }
    bool empty()
    {
        if (sz == 0)
        {
            cout << "stack is empty" << endl;
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
    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}