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
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void checkEquality(Node *head1, Node *head2)
{
    Node *n1 = head1;
    Node *n2 = head2;
    int count1 = 0, count2 = 0;
    while (n1 != NULL)
    {
        count1++;
        n1 = n1->next;
    }
    while (n2 != NULL)
    {
        count2++;
        n2 = n2->next;
    }
    Node *m1 = head1;
    Node *m2 = head2;
    if (count1 == count2)
    {
        int flag = 0;
        while ((m1 != NULL) && (m2 != NULL))
        {
            if (m1->value == m2->value)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            m1 = m1->next;
            m2 = m2->next;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int value;
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
    while (true)
    {
        int value;
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
    checkEquality(head1, head2);
    return 0;
}