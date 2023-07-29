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

void insertElement(Node *&head, int value, int position, int count)
{
    // if (head == NULL)
    // {
    //     head->value = value;
    // }
    if (position == 0)
    {

        Node *deleteNode = head;
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        delete deleteNode;
    }
    else if (position > 0 && position <= count)
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
    else if (position > count)
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
void printLinkedList(Node *head)
{
    if (head == NULL)
    {
        cout << "Enter Element First " << endl;
        return;
    }
    else
    {
        cout << endl
             << endl
             << "Linked list : " << endl;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl
             << endl
             << "Linked list is printed" << endl;
    }
}
int main()
{
    Node *head = NULL;
    int c;
    while (true)
    {

        int position;
        int value;
        cout << "Enter a value : ";
        cin >> value;
        if (value < 0)
        {
            break;
        }
        else
        {
            cout << "enter position : ";
            cin >> position;
            if (head == NULL)
            {
                position = 0;
            }
        }
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        // cout << "Linked list size : " << count << endl;
        insertElement(head, value, position, count);
        c = count;
    }
    printLinkedList(head);
    cout << "size of the linked lsit is : " << c + 1 << endl;
    return 0;
}