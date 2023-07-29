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

BinaryTree *convert(int a[], int size, int left, int right)
{
    int mid = (left + right) / 2;
    if (left > right)
    {
        return NULL;
    }
    BinaryTree *root = new BinaryTree(a[mid]);
    BinaryTree *leftRoot = convert(a, size, left, mid - 1);
    BinaryTree *rightRoot = convert(a, size, mid + 1, right);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    BinaryTree *root = convert(a, size, 0, size - 1);
    levelorder(root);
    return 0;
}