class Solution {
  public:
    void helper(Node* root,int target,vector<int>& ans,vector<int> temp){
        if(root==NULL) return ;
        if(root->data==target){
            ans=temp;
            return;
        }
        temp.push_back(root->data);
        helper(root->left,target,ans,temp);
        helper(root->right,target,ans,temp);
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        if(root==NULL) return ans;
        helper(root,target,ans,{});
        reverse(ans.begin(),ans.end());
        return ans;
    }
};