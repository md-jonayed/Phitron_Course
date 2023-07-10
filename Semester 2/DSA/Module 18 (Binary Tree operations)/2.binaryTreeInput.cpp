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
        BinaryTree *p = q.front();
        q.pop();
        BinaryTree *left;
        BinaryTree *right;
        int l, r;
        cin >> l >> r;
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
        p->left = left;
        p->right = right;
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

void levelorder(BinaryTree *root)
{
    if (root == NULL)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    queue<BinaryTree *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTree *f = q.front();
        q.pop();
        cout << f->value << " ";
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    BinaryTree *root = input();
    levelorder(root);
    return 0;
}