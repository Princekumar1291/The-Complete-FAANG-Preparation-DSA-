//Problem Link: https://leetcode.com/problems/binary-tree-inorder-traversal/description/


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr=root;
        vector<int> ans;
        while(curr!=NULL){
            if(curr->left!=NULL){ //find pred
                TreeNode* pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){ //Link
                    pred->right=curr;
                    curr=curr->left;
                }
                if(pred->right==curr){
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
    }
};