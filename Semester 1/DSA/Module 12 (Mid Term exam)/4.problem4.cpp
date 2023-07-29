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

void inserAtHead(Node *&head, Node *&tail, int value)
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
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
void insertAtPosition(Node *head, int position, int value)
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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print(Node *head, Node *tail)
{
    Node *temp1 = head;
    Node *temp2 = tail;
    cout << "L -> ";
    while (temp1 != NULL)
    {
        cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    cout << "\n";
    cout << "R -> ";
    while (temp2 != NULL)
    {
        cout << temp2->value << " ";
        temp2 = temp2->prev;
    }
    cout << "\n";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int position, value;
        cin >> position >> value;
        if (position == 0)
        {
            inserAtHead(head, tail, value);
            print(head, tail);
        }
        else if (position == (size(head)))
        {
            insert(head, tail, value);
            print(head, tail);
        }
        else if (position > 0 && position < (size(head)))
        {
            insertAtPosition(head, position, value);
            print(head, tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}