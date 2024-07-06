//Problem Link: https://leetcode.com/problems/search-in-a-binary-search-tree/description/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        else if(root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
        return NULL;
    }
};







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