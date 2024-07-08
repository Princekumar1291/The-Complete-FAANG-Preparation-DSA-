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




class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return ;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();st.pop();
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
            if(!st.empty())temp->right=st.top();
            temp->left=NULL;
        }
    }
};