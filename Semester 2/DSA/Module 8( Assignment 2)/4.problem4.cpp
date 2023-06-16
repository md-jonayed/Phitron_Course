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
void printReverse(Node *head)
{

    Node *temp1 = head;
    if (temp1 == NULL)
    {
        return;
    }
    printReverse(temp1->next);
    cout << temp1->value << " ";
}
void print(Node *head)
{
    Node *temp2 = head;

    for (Node *i = temp2; i != NULL; i = i->next)
    {
        cout << i->value << " ";
    }

    cout << endl;
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
    printReverse(head);
    cout << endl;
    print(head);
    return 0;
}