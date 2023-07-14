#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int>p=q.front();
        TreeNode<int>* parent = p.first;
        int level = p.second;
        q.pop();
        if(parent->val==searchedValue){
            return level;
        }
        if(parent->left!=NULL){
            q.push({parent->left,level+1});
        }
        if(parent->right!=NULL){
            q.push({parent->right,level+1});
        }
    }
}
