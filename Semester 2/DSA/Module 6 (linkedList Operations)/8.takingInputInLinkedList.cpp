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
void insert_at_head(Node *&head)
{
    int value;
    cout << "enter a value : ";
    cin >> value;
    if (value == -1)
    {
        printLinkedList(head);
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    cout << "\n";
}

void insertAtLastPosition(Node *&head)
{
    if (head == NULL)
    {
        insert_at_head(head);
    }
    else
    {
        int value;
        cout << "Enter a value : ";
        cin >> value;
        if (value == -1)
        {
            printLinkedList(head);
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
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        insertAtLastPosition(head);
    }
    return 0;
}