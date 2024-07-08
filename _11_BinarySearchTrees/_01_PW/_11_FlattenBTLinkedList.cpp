//Problem Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/


class Solution {
public:
    void helper(TreeNode* root,TreeNode*& prev){
        if(root==NULL) return ;
        helper(root->right,prev);
        helper(root->left,prev);
        root->right=prev;
        prev=root;
        root->left=NULL;
    }
    void flatten(TreeNode* root) {
        TreeNode* prev=NULL;
        helper(root,prev);
    }
};