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
void printLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty insert element first" << endl;
    }
    else
    {
        cout << "Linked list values : ";
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    cout << "\n";
}
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtLastPosition(Node *&head, int value)
{
    if (head == NULL)
    {
        insert_at_head(head, value);
    }
    else
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int value;
        cout << "Enter a value : ";
        cin >> value;
        if (value < 0)
        {
            break;
        }
        insertAtLastPosition(head, value);
    }
    printLinkedList(head);
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    cout << size << endl;
    Node *n = head;
    if (size % 2 == 0)
    {
        for (int i = 1; i <= (size / 2) + 1; i++)
        {
            if (i == (size / 2) || (i == (size / 2) + 1))
            {
                cout << n->value << endl;
            }
            n = n->next;
        }
        }
    else
    {
        for (int i = 1; i <= (size / 2) + 1; i++)
        {
            if (i == (size / 2) + 1)
            {
                cout << n->value << endl;
            }
            n = n->next;
        }
    }
}
