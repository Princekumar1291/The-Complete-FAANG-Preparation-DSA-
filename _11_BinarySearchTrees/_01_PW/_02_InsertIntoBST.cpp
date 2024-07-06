//Problem Link: https://leetcode.com/problems/search-in-a-binary-search-tree/description/

class Solution {
public:
    void helper(TreeNode* root,TreeNode*& ans,int val){
        if(root==NULL) return ;
        if(root->val==val) {
            ans=root;
            return ;
        }
        else if(root->val>val) helper(root->left,ans,val);
        else helper(root->right,ans,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
        helper(root,ans,val);
        return ans;
    }
};











class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        if(val>root->val) root->right=insertIntoBST(root->right,val);
        else root->left=insertIntoBST(root->left,val);
        return root;
    }
};