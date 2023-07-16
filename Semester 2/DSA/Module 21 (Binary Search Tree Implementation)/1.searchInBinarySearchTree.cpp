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
        root == NULL;
    }
    else
    {
        root = new BinaryTree(value);
    }
    queue<BinaryTree *> q;
    q.push(root);
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
        BinaryTree *front = q.front();
        q.pop();
        cout << front->value << " ";
        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
    }
}
bool search(BinaryTree *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->value == x)
    {
        return true;
    }
    if (x < root->value)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    BinaryTree *root = input();

    levelorder(root);
    int val;
    cin >> val;
    if (search(root, val) == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}