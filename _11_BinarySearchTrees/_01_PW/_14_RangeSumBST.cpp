//Problem Link: https://leetcode.com/problems/range-sum-of-bst/description/





class Solution {
public:
    void helper(TreeNode* root,int low,int high,int& ans){
        if(root==NULL) return ;
        helper(root->left,low,high,ans);
        if(root->val <= high && root->val >= low) ans+=root->val;
        helper(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        helper(root,low,high,ans);
        return ans;
    }
};