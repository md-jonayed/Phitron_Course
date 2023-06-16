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
void insertHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = newNode;
    }
}
void insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
    Node *tail = NULL;
    int testCases;
    cin >> testCases;
    for (int i = 1; i <= testCases; i++)
    {
        int x, value;
        cin >> x >> value;
        if (x == 0)
        {
            insertHead(head, tail, value);
            // print(head);
        }
        else if (x == 1)
        {
            insert(head, tail, value);
            // print(head);
        }
        cout << head->value << " " << tail->value << endl;
    }
    return 0;
}
