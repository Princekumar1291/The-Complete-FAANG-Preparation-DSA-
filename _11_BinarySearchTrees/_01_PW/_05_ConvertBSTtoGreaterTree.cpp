//Problem Link: https://leetcode.com/problems/convert-bst-to-greater-tree/description/






class Solution {
public:
    void helper(TreeNode* root,int& sum){
        if(root==NULL) return;
        helper(root->right,sum);
        sum+=root->val;
        root->val=sum;
        helper(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return NULL;
        int sum=0;
        helper(root,sum);
        return root;
    }
};