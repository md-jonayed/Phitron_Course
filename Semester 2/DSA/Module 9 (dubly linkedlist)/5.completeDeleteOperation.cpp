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
void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void deletTail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void deleteAtPosition(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void printNormal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    Node *tail = d;

    int position;
    cout << "enter position : ";
    cin >> position;
    if (position == 0)
    {
        deleteHead(head);
        printNormal(head);
        printReverse(tail);
    }
    else if (position == size(head) - 1)
    {
        deletTail(tail);

        printNormal(head);
        printReverse(tail);
    }
    else if (position > 0 && position < (size(head) - 1))
    {
        deleteAtPosition(head, position);

        printNormal(head);
        printReverse(tail);
    }
    else
    {
        cout << "Invalid Index" << endl;
    }

    return 0;
}
