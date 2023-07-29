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
    if (value == -1)
    {
        root = NULL;
    }
    else
    {
        root = new BinaryTree(value);
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
    queue<BinaryTree *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTree *parent = q.front();
        q.pop();
        cout << parent->value << " ";
        if (parent->left != NULL)
        {
            q.push(parent->left);
        }
        if (parent->right != NULL)
        {
            q.push(parent->right);
        }
    }
}

void insert(BinaryTree *&root, int value)
{
    if (root == NULL)
    {
        root = new BinaryTree(value);
    }
    if (value < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new BinaryTree(value);
        }
        else
        {
            insert(root->left, value);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new BinaryTree(value);
        }
        else
        {
            insert(root->right, value);
        }
    }
}
int main()
{
    BinaryTree *root = input();
    int value;
    cin >> value;
    insert(root, value);
    levelorder(root);
    return 0;
}