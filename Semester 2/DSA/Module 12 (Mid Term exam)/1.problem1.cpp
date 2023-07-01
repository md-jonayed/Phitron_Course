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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
}
void insertNode(Node *&head, Node *&tail, int value)
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
void sort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value >= j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    // print(head);
}
void removeDuplicate(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        Node *t = temp;
        while (t->next != NULL)
        {
            if (t->next->value == temp->value)
            {
                Node *deleteNode = t->next;
                t->next = t->next->next;
                delete deleteNode;
            }
            else
            {
                t = t->next;
            }
        }
        temp = temp->next;
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
            insertNode(head, tail, value);
        }
    }
    removeDuplicate(head);
    sort(head);
    print(head);

    return 0;
}