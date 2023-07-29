#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
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
            tail = newNode;
        }
    }

    void pop()
    {
        sz--;
        if (sz == 0)
        {
            cout << "Queue is empty can not be popped" << endl;
        }
        else
        {

            if (head == NULL)
            {
                tail = NULL;
            }
            else
            {
                Node *deleteNode = head;
                head = head->next;
                delete deleteNode;
            }
        }
    }
    int front()
    {
        if (sz != 0)
        {
            return head->value;
        }
        else
        {
            cout << "Queue is empty" << endl;
            return 0;
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