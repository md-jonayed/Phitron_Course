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
        if (l != -1)
        {
            left = new BinaryTree(l);
        }
        else
        {
            left = NULL;
        }
        if (r != -1)
        {
            right = new BinaryTree(r);
        }
        else
        {
            right = NULL;
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
int maximumHeight(BinaryTree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int l = maximumHeight(root->left);
    int r = maximumHeight(root->right);
    return max(l, r) + 1;
}
int levelOrder(BinaryTree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = 0;
    queue<BinaryTree *> q;
    q.push(root);
    int nodeCount = 0;
    while (!q.empty())
    {
        BinaryTree *f = q.front();
        q.pop();

        nodeCount++;

        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
    return nodeCount;
}
int main()
{
    BinaryTree *root = input();
    int result1 = maximumHeight(root);

    result1 = pow(2, result1) - 1;

    int result2 = levelOrder(root);

    if (result1 == result2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}