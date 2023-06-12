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
void insert_at_tail(Node *&head, int val)
{

    Node *temp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAtHead(Node *&head)
{
    int value;
    cout << "enter a value : " << endl;
    cin >> value;
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insertAtAnyPosition(Node *head)
{
    cout << "enter value : " << endl;
    int value;
    cin >> value;
    Node *newNode = new Node(value);
    int position;
    cout << "enter a position to insert the new node : " << endl;
    cin >> position;
    if (position == 0)
    {
        insertAtHead(head);
    }
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void printLinkedList(Node *head)
{
    Node *temp = head;

    cout << "Linked list : ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "enter 1 to insert : " << endl;
        cout << "enter 2 to print LinkedList : " << endl;
        cout << "enter 3 to insert at any position : " << endl;
        cout << "enter 4 to insert at head : " << endl;
        cout << "enter 5 to terminate : " << endl;
        int num;
        cin >> num;
        if (num == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (num == 2)
        {
            printLinkedList(head);
        }
        else if (num == 3)
        {
            insertAtAnyPosition(head);
        }
        else if (num == 4)
        {
            insertAtHead(head);
        }
        else if (num == 5)
        {
            break;
        }
    }

    return 0;
}