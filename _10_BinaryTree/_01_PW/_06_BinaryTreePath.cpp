// Problem Link: https://leetcode.com/problems/binary-tree-paths/description/

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
    void helper(TreeNode* root,vector<string>& ans,string s) {
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        string temp=to_string(root->val)+"->";
        helper(root->left,ans,s+temp);
        helper(root->right, ans,s+temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root,ans,"");
        return ans;
    }
};

int main(){
  
  return 0;
}