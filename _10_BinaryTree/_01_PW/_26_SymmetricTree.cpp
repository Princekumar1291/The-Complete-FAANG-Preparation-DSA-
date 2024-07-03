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


class Solution {
public:
    void helper(TreeNode* p,TreeNode* q,bool& ans){
        if(p==NULL && q==NULL) return ;
        else if(p==NULL || q==NULL) {
            ans=false;
            return ;
        }
        else if(p->val!=q->val){
            ans=false;
            return ;
        }
        helper(p->left,q->right,ans);
        helper(p->right,q->left,ans);
        return ;
    }
    bool isSymmetric(TreeNode* root) {
        bool ans=true;
        helper(root->left,root->right,ans);
        return ans;
    }
};