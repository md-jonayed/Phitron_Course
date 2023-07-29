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
void insert(Node *&head, Node *&tail, int value)
{
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
void sortAndPrintMiddle(Node *head)
{
    Node *temp = head;
    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    int count = 0;
    Node *n = head;
    while (n != NULL)
    {
        count++;
        n = n->next;
    }

    Node *m = head;

    if (count % 2 != 0)
    {
        for (int i = 1; i <= ((count / 2) + 1); i++)
        {
            if (i == ((count / 2) + 1))
            {
                cout << m->value << endl;
            }
            m = m->next;
        }
    }
    else
    {
        for (int i = 1; i <= (count / 2) + 1; i++)
        {
            if ((i == (count / 2) + 1) || (i == (count / 2)))
            {
                cout << m->value << " ";
            }
            m = m->next;
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value < 0)
        {
            break;
        }
        else
        {
            insert(head, tail, value);
        }
    }
    sortAndPrintMiddle(head);
    return 0;
}