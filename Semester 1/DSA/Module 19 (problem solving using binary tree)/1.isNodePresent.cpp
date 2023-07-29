/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int present(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == x)
    {
        return 1;
    }
    int l = present(root->left, x);
    int r = present(root->right, x);
    if (l == 1 || r == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    int result = present(root, x);
    if (result == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}