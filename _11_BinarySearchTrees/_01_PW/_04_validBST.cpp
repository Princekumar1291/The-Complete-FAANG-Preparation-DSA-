//Problem Link: https://leetcode.com/problems/validate-binary-search-tree/description/






void helper(TreeNode* root,vector<int>& v){
    if(root==NULL) return;
    helper(root->left,v);
    v.push_back(root->val);
    helper(root->right,v);
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        if(ans.size()<=1) return true;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1]) return false;
        }
        return true;
    }
};












class Solution {
public:
    void helper(TreeNode* root,long long& prev,bool& ans){
        if(root==NULL) return ;
        helper(root->left,prev,ans);
        if(prev>=root->val) {
            ans=false;
            return ;
        }
        prev=root->val;
        helper(root->right,prev,ans);
    }
    bool isValidBST(TreeNode* root) {
        long long prev=LLONG_MIN;
        bool ans=true;
        helper(root,prev,ans);
        return ans;
    }
};