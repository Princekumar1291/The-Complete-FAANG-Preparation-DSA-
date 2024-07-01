// Problem Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/

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
    void helper(TreeNode* root, TreeNode* ele,bool& check){
        if(root==NULL) return;
        if(root==ele) {
            check=true;
            return ;
        }
        helper(root->left,ele,check);
        helper(root->right,ele,check);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p || root==q) return root;
        bool check1=false;
        bool check2=false;
        helper(root->left,p,check1);
        helper(root->right,q,check2);
        if(check1 && check2) return root;
        else if(!check1 && !check2) return root;
        else if(check1) return lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);
        return NULL;
    }
};

int main(){
  
  return 0;
}