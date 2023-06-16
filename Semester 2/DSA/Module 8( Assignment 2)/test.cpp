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
void insertHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insertTail(Node *&head, int value)
{
    if (head == NULL)
    {
        insertHead(head, value);
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
void print(Node *head)
{
    Node *temp = head;
    cout << temp->value << " ";
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << temp->value << endl;
}
int main()
{
    Node *head = NULL;
    // Node *tail = NULL;
    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++)
    {
        int x, value;
        cin >> x >> value;
        if (x == 0)
        {
            insertHead(head, value);
            print(head);
        }
        else if (x == 1)
        {
            insertTail(head, value);
            print(head);
        }
    }
    return 0;
}
