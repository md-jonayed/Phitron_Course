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
void insertHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    // return;
}
void insertTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL && tail == NULL)
    {
        insertHead(head, tail, value);
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insert(Node *&head, Node *&tail, int value, int position)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int testcases;

    cout << "enter test cases number : ";
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        int value, position;
        cout << "enter position : ";
        cin >> position;
        cout << "enter value : ";
        cin >> value;
        int size = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        if (position == 0)
        {
            insertHead(head, tail, value);
            print(head, tail);
        }
        else if (position == size)
        {
            insertTail(head, tail, value);
            print(head, tail);
        }
        else if (position > 0 && position < size)
        {
            insert(head, tail, value, position);
            print(head, tail);
        }
        else if (position > size)
        {
            cout << "Invalid index" << endl;
        }
    }
    return 0;
}