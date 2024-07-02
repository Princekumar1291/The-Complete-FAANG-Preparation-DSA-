//Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/

class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans){
        if(root==NULL) return ;
        ans.push_back(root->val);
        helper(root->left,ans);
        helper(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};

//T(best)--> O(h) beacuse call stack h is height
//T(worse)--> O(n) n is nodes