#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int vlaue;
    Node *next;

    Node(int value)
    {
        this->vlaue = value;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;
    cout << head->vlaue << " " << a->vlaue << " " << head->next->vlaue << endl;

    return 0;
}