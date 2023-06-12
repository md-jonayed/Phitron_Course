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
void insert_at_tail(Node *&head, int val)
{

    Node *temp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printLinkedList(Node *head)
{
    Node *temp = head;

    cout << "Linked list : ";
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
        cout << "enter 1 to insert : " << endl;
        cout << "enter 2 to print LinkedList : " << endl;
        cout << "enter 3 to terminate : " << endl;
        int num;
        cin >> num;
        if (num == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (num == 2)
        {
            printLinkedList(head);
        }
        else if (num == 3)
        {
            break;
        }
    }

    return 0;
}