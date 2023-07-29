#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    else
    {
        bool frq[3005] = {false};
        queue<pair<TreeNode<int> *, int>> q;
        q.push({root, 1});
        while (!q.empty())
        {
            pair<TreeNode<int> *, int> pr;
            pr = q.front();
            q.pop();
            TreeNode<int> *node = pr.first;
            int level = pr.second;
            if (frq[level] == false)
            {
                v.push_back(node->data);
                frq[level] = true;
            }

            if (node->left != NULL)
            {
                q.push({node->left, level + 1});
            }

            if (node->right != NULL)
            {
                q.push({node->right, level + 1});
            }
        }
        return v;
    }
}
