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
    int findTilt(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int tilt = 0;
        findTiltHelper(root, tilt);
        return tilt;
    }

private:
    int findTiltHelper(TreeNode *node, int &tilt)
    {
        if (node == NULL)
        {
            return 0;
        }

        int leftSum = findTiltHelper(node->left, tilt);
        int rightSum = findTiltHelper(node->right, tilt);

        tilt += abs(leftSum - rightSum);

        return leftSum + rightSum + node->val;
    }
};
