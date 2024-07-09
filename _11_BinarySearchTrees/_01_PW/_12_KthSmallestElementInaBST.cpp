//Problem Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/




class Solution {
public:
    void helper(TreeNode* root,int& ans,int& count,int& k){
        if(root==NULL) return ;
        helper(root->left,ans,count,k);
        count++;
        if(count==k){
            ans=root->val;
            return ;
        }
        helper(root->right,ans,count,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int count=0;
        helper(root,ans,count,k);
        return ans;
    }
};