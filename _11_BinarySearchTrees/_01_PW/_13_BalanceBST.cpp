//Problem Link: https://leetcode.com/problems/balance-a-binary-search-tree/description/




class Solution {
public:
    void helper(TreeNode* root,vector<int>& inOrder){
        if(root==NULL) return;
        helper(root->left,inOrder);
        inOrder.push_back(root->val);
        helper(root->right,inOrder);
    }
    TreeNode* createBst(vector<int>& v,int i,int j) {
        if(i>j) return NULL;
        int mid=(i+j)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=createBst(v,i,mid-1);
        root->right=createBst(v,mid+1,j);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inOrder;
        helper(root,inOrder);
        int n=inOrder.size();
        int i=0;
        int j=n-1;
        return createBst(inOrder,i,j);
    }
};