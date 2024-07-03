class Solution {
public:
    bool sym(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        else if(p==NULL || q==NULL) return false;
        else if(p->val==q->val && sym(p->left,q->right) && sym(p->right,q->left)) return true;
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        bool ans=sym(root->left,root->right);
        return ans;
    }
};