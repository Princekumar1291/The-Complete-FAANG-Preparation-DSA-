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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st;
        TreeNode* node=root;
        while(!st.empty() || node!=NULL){
            if(node==NULL){
                TreeNode* temp=st.top();
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
            }
            else{
                st.push(node);
                node=node->left;
            }
        }
        return ans;
    }
};

int main(){
  
  return 0;
}