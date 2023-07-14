/************************************************************

    Following is the TreeNode class structure:

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
#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root)
{

    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    else
    {
        queue<TreeNode<int> *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode<int> *node = q.front();
            q.pop();
            v.push_back(node->val);
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
    }

    reverse(v.begin(), v.end());
    return v;
}