//Problem Link: https://leetcode.com/problems/binary-tree-right-side-view/description/

class Solution {
public:

    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    } 
    
    void levelTrav(TreeNode* root,vector<int>& ans,int l,int k){
        if(root==NULL) return;
        if(l==k) ans[l]=root->val;
        levelTrav(root->left,ans,l,k+1);
        levelTrav(root->right,ans,l,k+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        int h=height(root);
        vector<int> ans(h);
        for(int i=0;i<h;i++){
            levelTrav(root,ans,i,0);
        }
        return ans;
    }

};