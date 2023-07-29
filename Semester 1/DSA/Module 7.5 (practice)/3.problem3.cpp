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
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printMiddleValues(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count % 2 != 0)
    {
        Node *n = head;
        for (int i = 1; i <= (count / 2) + 1; i++)
        {
            if (i == (count / 2) + 1)
            {
                cout << n->value << endl;
            }
            n = n->next;
        }
        cout << endl;
    }
    else
    {
        Node *n = head;
        for (int i = 1; i <= (count / 2) + 1; i++)
        {
            if ((i == (count / 2) + 1) || (i == (count / 2)))
            {
                cout << n->value << " ";
            }
            n = n->next;
        }
        cout << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << "enter value : ";
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

    printMiddleValues(head);
    return 0;
}