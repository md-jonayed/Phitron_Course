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

int mx = INT_MIN;
int maxValue(BinaryTree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        if (mx < root->value)
        {
            mx = root->value;
        }
    }

    int l = maxValue(root->left);
    int r = maxValue(root->right);
    return mx;
}

int mn = INT_MAX;
int minValue(BinaryTree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        if (mn > root->value)
        {
            mn = root->value;
        }
    }

    int l = minValue(root->left);
    int r = minValue(root->right);

    return mn;
}

int main()
{
    BinaryTree *root = input();
    int r1 = maxValue(root);
    int r2 = minValue(root);
    cout << r1 << " " << r2 << endl;
    return 0;
}
