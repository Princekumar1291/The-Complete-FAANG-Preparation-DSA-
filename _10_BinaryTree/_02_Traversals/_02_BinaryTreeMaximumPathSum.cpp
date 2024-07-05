//Problem Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/


#include <bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val){
    this->val=val;
    left=NULL;
    right=NULL;
  }
};



void helper(TreeNode* root,int& ans,int sum){
    if(root==NULL) return;
    sum+=root->val;
    ans=max(ans,sum);
    helper(root->left,ans,sum);
    helper(root->right,ans,sum);
}
void helper2(TreeNode* root,int& ans){
    if(root==NULL) return ;
    int ans1=0;
    int ans2=0;
    helper(root->left,ans1,0);
    helper(root->right,ans2,0);
    ans=max(ans,root->val+ans1+ans2);
    helper2(root->left,ans);
    helper2(root->right,ans);
}
int maxPathSum(TreeNode* root) {
    int ans=INT_MIN;
    helper2(root,ans);
    return ans;
}

int main() {
  
}

