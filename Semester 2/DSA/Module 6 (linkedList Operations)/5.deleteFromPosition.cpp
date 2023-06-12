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

void insert_at_head(Node *&head)
{
    int value;
    cout << "enter a value : ";
    cin >> value;
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << "\n";
}

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
void insertAtAnyPosition(Node *&head)
{
    int value, position;
    cout << "Enter a value : ";
    cin >> value;
    cout << "enter a position : ";
    cin >> position;
    Node *newNode = new Node(value);
    if (position == 0)
    {
        insert_at_head(head);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i <= position - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
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
        Node *newNode = new Node(value);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "\n";
}

void deleteFromAnyPosistion(Node *head)
{
    Node *temp = head;
    Node *deleteNode;
    int position;
    cout << "enter a position to delete : ";
    cin >> position;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {

        cout << "Enter 1 to insert elements at beginning" << endl;
        cout << "Enter 2 to print linked list" << endl;
        cout << "Enter 3 to insert element  at any position  in linked list" << endl;
        cout << "enter 4 to insert element at last position" << endl;
        cout << "Enter 5 to delete an element from any position" << endl;

        int option;
        cout << "enter an option : ";
        cin >> option;
        if (option == 1)
        {
            insert_at_head(head);
        }
        else if (option == 2)
        {
            printLinkedList(head);
        }
        else if (option == 3)
        {
            insertAtAnyPosition(head);
        }
        else if (option == 4)
        {
            insertAtLastPosition(head);
        }
        else if (option == 5)
        {
            deleteFromAnyPosistion(head);
        }
    }
    return 0;
}