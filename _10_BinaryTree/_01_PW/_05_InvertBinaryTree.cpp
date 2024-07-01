// Problem Link: https://leetcode.com/problems/invert-binary-tree/description/

#include<bits/stdc++.h>
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

class Solution {
public:
    void helper(TreeNode* root) {
        if(root==NULL) return ;
        swap(root->left,root->right);
        helper(root->left);
        helper(root->right);

    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};

int main(){
  
  return 0;
}