#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    int one = 1;
    while (!q.empty())
    {
        BinaryTreeNode<int> *node = q.front();
        q.pop();
        if (node->data == -1)
        {
            one++;
        }
        else
        {
            one--;
        }
        if (node->left != NULL)
        {
            q.push(node->left);
        }
        if (node->right != NULL)
        {
            q.push(node->right);
        }
    }
    if (one % 2 == 0)
    {
        return true;
        ;
    }
    else
    {
        return false;
    }
}