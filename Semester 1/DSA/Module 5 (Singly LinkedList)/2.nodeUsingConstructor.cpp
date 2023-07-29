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
    Node a(10);
    Node b(20);
    a.next = &b;
    cout << a.next->vlaue << endl;
    return 0;
}