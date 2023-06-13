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
void insert(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printLInkedList(Node *head)
{
    Node *temp = head;
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
        int value;
        cout << "enter value : ";
        cin >> value;
        if (value < 0)
        {
            break;
        }
        insert(head, value);
    }
    printLInkedList(head);
    int flag = 0;
    Node *n = head;
    while (n->next != NULL)
    {
        if (n->value < n->next->value)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        n = n->next;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}