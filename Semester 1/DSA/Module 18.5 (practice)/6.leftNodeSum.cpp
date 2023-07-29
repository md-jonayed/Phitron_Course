#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

long long sum = 0;
long long summation(BinaryTreeNode<int> *root)
{

    if (root == NULL)
    {
        return sum;
    }
    if (root->left != NULL)
    {
        BinaryTreeNode<int> *left = root->left;
        sum = sum + left->data;
    }
    summation(root->left);
    summation(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
    sum = 0;
    long long result = summation(root);
    return result;
}
