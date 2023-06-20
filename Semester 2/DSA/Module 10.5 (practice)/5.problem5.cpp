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

void insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL && tail == NULL)
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
void print(Node *head, Node *tail)
{
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    Node *temp2 = tail;
    while (temp2 != NULL)
    {
        cout << temp2->value << " ";
        temp2 = temp2->prev;
    }
    cout << endl;
}
void sort(Node *&head, Node *&tail)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
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
    // print(head, tail);
    sort(head, tail);
    print(head, tail);
    return 0;
}