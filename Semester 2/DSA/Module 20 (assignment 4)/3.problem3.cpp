#include <bits/stdc++.h>
using namespace std;
class BinaryTree
{
public:
    int value;
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

BinaryTree *input()
{
    int value;
    cin >> value;
    BinaryTree *root;
    if (value != -1)
    {
        root = new BinaryTree(value);
    }
    else
    {
        root = NULL;
    }
    queue<BinaryTree *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        BinaryTree *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        BinaryTree *left;
        BinaryTree *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new BinaryTree(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new BinaryTree(r);
        }
        parent->left = left;
        parent->right = right;

        if (parent->left != NULL)
        {
            q.push(parent->left);
        }
        if (parent->right != NULL)
        {
            q.push(parent->right);
        }
    }
    return root;
}

void levelorder(BinaryTree *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<int> s;
    queue<BinaryTree *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTree *parent = q.front();
        q.pop();

        s.push(parent->value);
        if (parent->right != NULL)
        {
            q.push(parent->right);
        }

        if (parent->left != NULL)
        {
            q.push(parent->left);
        }
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    BinaryTree *root = input();
    levelorder(root);
    return 0;
}