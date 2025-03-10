#include<bits/stdc++.h>
using namespace std;


class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){
    this->val=val;
    left=nullptr;
    right=nullptr;
  }
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left!=NULL) st.push(temp->left);
            if(temp->right!=NULL) st.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    
  return 0;
}