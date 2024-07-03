//Problem Link: https://leetcode.com/problems/balanced-binary-tree/description/


class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void helper(TreeNode* root,bool& ans){
        if(root==NULL) return ;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1) ans=false;
        helper(root->left,ans);
        helper(root->right,ans);
        return ;
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        helper(root,ans);
        return ans;
    }
};




