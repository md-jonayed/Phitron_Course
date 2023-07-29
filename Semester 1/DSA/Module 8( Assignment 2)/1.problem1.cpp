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
void insert(Node *&head, Node *&tail, int value)
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
        tail = newNode;
    }
}
void printMaxMin(Node *head)
{
    Node *temp = head;
    Node *max = head;
    Node *min = head;
    while (temp != NULL)
    {
        if (max->value <= temp->value)
        {
            max = temp;
        }
        temp = temp->next;
    }
    Node *n = head;
    while (n != NULL)
    {
        if (min->value >= n->value)
        {
            min = n;
        }
        n = n->next;
    }
    cout << max->value << " " << min->value << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int value;
        cout << "enter a value : ";
        cin >> value;
        if (value < 0)
        {
            break;
        }
        else
        {
            insert(head, tail, value);
        }
    }
    printMaxMin(head);
    return 0;
}