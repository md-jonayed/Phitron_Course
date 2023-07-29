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
    int same(TreeNode *root, int value)
    {
        if (root == NULL)
        {
            return 1;
        }
        if (root->val != value)
        {
            return 0;
        }
        else
        {
            int l = same(root->left, value);
            int r = same(root->right, value);
            if (l == 1 && r == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    bool isUnivalTree(TreeNode *root)
    {

        int value = root->val;
        int result = same(root, value);
        if (result == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};