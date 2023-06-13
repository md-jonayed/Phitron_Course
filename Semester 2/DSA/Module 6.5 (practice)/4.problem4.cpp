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

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insertAtAnyPosition(Node *head, int value, int position)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insertAtLast(Node *head, int value)
{
    Node *temp = head;
    Node *newNode = new Node(value);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "\n";
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
        if (head == NULL)
        {
            insertAtHead(head, value);
        }
        else
        {
            insertAtLast(head, value);
        }
    }
    printLinkedList(head);
    cout << "enter test cases : ";
    int testCases;
    cin >> testCases;

    for (int i = 1; i <= testCases; i++)
    {
        cout << "Enter value : ";
        int value;
        cin >> value;
        cout << "enter position : ";
        int position;
        cin >> position;
        Node *n = head;
        int size = 0;
        while (n != NULL)
        {
            n = n->next;
            size++;
        }
        if (position == 0)
        {
            insertAtHead(head, value);
            printLinkedList(head);
        }
        else if (position > 0 && position < size)
        {
            insertAtAnyPosition(head, value, position);
            printLinkedList(head);
        }
        else if (position == size)
        {
            insertAtLast(head, value);
            printLinkedList(head);
        }
        else
        {
            cout << "Invalid position " << endl;
        }
    }
    return 0;
}