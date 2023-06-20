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
void print(Node *head, Node *tail)
{
    Node *temp1 = head;
    Node *temp2 = tail;
    cout << "printing linked list in normal order : ";
    while (temp1 != NULL)
    {
        cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    cout << "\n";
    cout << "printing linked list in reverse order : ";
    while (temp2 != NULL)
    {
        cout << temp2->value << " ";
        temp2 = temp2->prev;
    }
    cout << "\n";
}
void compare(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int count1 = 0;
    while (temp1 != NULL)
    {
        count1++;
        temp1 = temp1->next;
    }
    int count2 = 0;
    while (temp2 != NULL)
    {
        count2++;
        temp2 = temp2->next;
    }
    if (count1 != count2)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;
        Node *t1 = head1;
        Node *t2 = head2;
        while (t1 != NULL)
        {
            if (t1->value == t2->value)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
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
            insert(head1, tail1, value);
        }
    }
    print(head1, tail1);

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
            insert(head2, tail2, value);
        }
    }
    print(head2, tail2);
    compare(head1, head2);

    return 0;
}