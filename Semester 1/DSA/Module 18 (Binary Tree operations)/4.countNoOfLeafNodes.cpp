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
int countLeafNodes(BinaryTree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {

        int l = countLeafNodes(root->left);
        int r = countLeafNodes(root->right);
        return l + r;
    }
}
int main()
{
    BinaryTree *root = input();
    cout << countLeafNodes(root) << endl;
    return 0;
}