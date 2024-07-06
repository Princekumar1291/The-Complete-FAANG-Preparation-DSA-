//Problem Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/



class Solution {
public:
    void insertInBST(TreeNode* root,int val){
        if(root==NULL) return;
        if(val < root->val){
            if(root->left==NULL){
                root->left=new TreeNode(val);
                return;
            }
            else insertInBST(root->left,val);
        }
        else{
            if(root->right==NULL){
                root->right=new TreeNode(val);
                return;
            }
            else insertInBST(root->right,val);
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++){
            insertInBST(root,preorder[i]);
        }
        return root;
    }
};