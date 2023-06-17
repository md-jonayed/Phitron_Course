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
void printNormal(Node *head)
{
    cout << "Printing in normal order : ";
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
    cout << "Printing in reverse : ";
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
    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->next = c;
    b->prev = a;
    c->prev = b;
    printNormal(head);
    printReverse(tail);
    return 0;
}