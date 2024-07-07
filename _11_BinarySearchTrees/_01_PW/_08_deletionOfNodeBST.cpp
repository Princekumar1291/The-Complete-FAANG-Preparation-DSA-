//Problem Link: https://leetcode.com/problems/delete-node-in-a-bst/


class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            // case 1: No child
            if(root->left==NULL && root->right==NULL) return NULL;

            // case 2: 1 Child
            else if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }

            // 2 Children
            else{
                TreeNode* temp=root->left;
                while(temp->right!=NULL){
                    temp=temp->right;
                }
                root->val=temp->val;
                root->left=deleteNode(root->left,root->val);
            }
        }
        else if(key<root->val) root->left=deleteNode(root->left,key);
        else root->right=deleteNode(root->right,key);
        return root;
    }
};