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
            return;
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
            return 0;
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
            return true;
        }
        else
        {
            return false;
        }
    }
};

class myQueue
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
        Node *deleteNode = head;

        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        if (sz == 0)
        {
            return 0;
        }
        else
        {
            return head->value;
        }
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
    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val); // 5,4,3,2,1
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val); // 5,4,3,2,1
    }
    list<int> a;
    list<int> b;
    while (!s.empty())
    {
        a.push_back(s.top()); // 5,4,3,2,1
        s.pop();
    }

    while (!q.empty())
    {
        b.push_back(q.front()); // 5,4,3,2,1
        q.pop();
    }
    if (a.size() == b.size())
    {
        int flag = 0;
        while (!a.empty() && !b.empty())
        {
            if (a.front() == b.front())
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            a.pop_front();
            b.pop_front();
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