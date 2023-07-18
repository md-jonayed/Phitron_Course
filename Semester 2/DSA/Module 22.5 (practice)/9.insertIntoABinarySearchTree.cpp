#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int> *insertionInBST(TreeNode<int> *root, int val)
{
    if (root == NULL)
    {
        root = new TreeNode<int>(val);
    }
    if (val < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new TreeNode<int>(val);
        }
        else
        {
            insertionInBST(root->left, val);
        }
    }

    if (val > root->val)
    {
        if (root->right == NULL)
        {
            root->right = new TreeNode<int>(val);
        }
        else
        {
            insertionInBST(root->right, val);
        }
    }
    return root;
}