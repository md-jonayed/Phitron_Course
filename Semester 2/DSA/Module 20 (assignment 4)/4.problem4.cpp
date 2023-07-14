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
queue<pair<int, int>> q1;
int l;
void levelOrder(BinaryTree *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<pair<BinaryTree *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<BinaryTree *, int> p = q.front();
        BinaryTree *parent = p.first;
        int level = p.second;
        l = level;
        q.pop();
        q1.push({parent->value, level});
        if (parent->left != NULL)
        {
            q.push({parent->left, level + 1});
        }
        if (parent->right != NULL)
        {
            q.push({parent->right, level + 1});
        }
    }
}
int main()
{
    BinaryTree *root = input();
    levelOrder(root);
    int position;
    cin >> position;
    if (position > l)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        while (!q1.empty())
        {
            pair<int, int> pr;
            pr = q1.front();
            if (position == pr.second)
            {
                cout << pr.first << " ";
            }
            q1.pop();
        }
    }
    return 0;
}