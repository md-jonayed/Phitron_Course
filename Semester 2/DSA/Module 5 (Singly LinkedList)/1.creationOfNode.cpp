#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *nextNode;
};
int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;
    a.nextNode = &b;
    b.nextNode = NULL;

    cout << a.value << endl;
    cout << b.value << endl;
    cout << a.nextNode->value << endl; // accessing b node value using dereferencing method
    cout << (*a.nextNode).value << endl;

    return 0;
}