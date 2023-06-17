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

void inserAtHead(Node *&head, Node *&tail, int value)
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtPosition(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
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

void printNormal(Node *head)
{
    Node *temp = head;
    cout << "Print normal order : ";
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
    cout << "Print reverse order : ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
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
    d->next = NULL;
    Node *tail = d;
    int position, value;
    cout << "enter position : ";
    cin >> position;
    cout << "enter value : ";
    cin >> value;

    if (position == 0)
    {
        inserAtHead(head, tail, value);
        printNormal(head);
        printReverse(tail);
    }
    else if (position == size(head))
    {
        insertAtTail(head, tail, value);
        printNormal(head);
        printReverse(tail);
    }
    else if (position > 0 && position < size(head))
    {
        insertAtPosition(head, position, value);
        printNormal(head);
        printReverse(tail);
    }
    else
    {
        cout << "Invalid index" << endl;
        printNormal(head);
        printReverse(tail);
    }
    return 0;
}