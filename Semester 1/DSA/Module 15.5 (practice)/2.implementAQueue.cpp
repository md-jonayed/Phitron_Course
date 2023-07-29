#include <bits/stdc++.h>
class Node
{

public:
    int data;

    Node *next;

    Node(int data)
    {

        this->data = data;

        this->next = NULL;
    }
};

class Queue
{

public:
    Node *head;

    Node *tail;
    int sz;

public:
    Queue()
    {

        head = NULL;

        tail = NULL;
        sz = 0;
    }

    bool isEmpty()
    {

        if (head == NULL)
        {

            return true;
        }

        else
        {

            return false;
        }
    }

    void enqueue(int data)
    {
        sz++;

        Node *newnode = new Node(data);

        if (isEmpty())
        {

            head = newnode;

            tail = newnode;
        }
        else
        {

            tail->next = newnode;

            tail = newnode;
        }
    }

    int dequeue()
    {

        if (isEmpty())
        {

            return -1;
        }
        sz--;

        int ans = head->data;

        Node *deleteNode = head;

        head = head->next;

        if (head == NULL)
        {

            tail = NULL;
        }

        delete deleteNode;

        return ans;
    }

    int front()
    {

        if (isEmpty())
        {

            return -1;
        }

        return head->data;
    }
};