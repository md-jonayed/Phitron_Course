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
    TreeNode *convert(int a[], int size, int left, int right)
    {
        int mid = (left + right) / 2;
        if (left > right)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(a[mid]);
        TreeNode *leftNode = convert(a, size, left, mid - 1);
        TreeNode *rightNode = convert(a, size, mid + 1, right);
        root->left = leftNode;
        root->right = rightNode;
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int size = nums.size();
        int a[size];
        for (int i = 0; i < size; i++)
        {
            a[i] = nums[i];
        }

        TreeNode *root = convert(a, size, 0, size - 1);
        return root;
    }
};