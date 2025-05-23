/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->val == val)
        {
            TreeNode *node = root;
            if (root->left == NULL)
            {
                node->left = NULL;
            }
            else
            {
                node->left = root->left;
            }
            if (root->right == NULL)
            {
                node->right = NULL;
            }
            else
            {
                node->right = root->right;
            }

            return node;
        }
        TreeNode *leftResult = searchBST(root->left, val);
        if (leftResult != NULL)
        {
            return leftResult;
        }
        TreeNode *rightResult = searchBST(root->right, val);
        if (rightResult != NULL)
        {
            return rightResult;
        }
        else
        {
            return NULL;
        }
    }
};
