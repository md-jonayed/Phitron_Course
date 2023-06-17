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
void insertTail(Node *&head, Node *&tail, int value)
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
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void print(Node *head, Node *tail)
{
    Node *temp1 = head;
    cout << "Printing in normal order : ";
    while (temp1 != NULL)
    {
        cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    Node *temp2 = tail;
    cout << "Printing in reverse order : ";
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
    while (true)
    {
        int value;
        cout << "enter value : ";
        cin >> value;
        if (value < 0)
        {
            break;
        }
        insertTail(head, tail, value);
    }
    print(head, tail);
    return 0;
}