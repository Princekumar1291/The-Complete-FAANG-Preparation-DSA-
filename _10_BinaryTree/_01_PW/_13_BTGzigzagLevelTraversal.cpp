// Problem Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

#include<bits/stdc++.h>
using namespace std;

class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(){
    this->val=val;
    left=NULL;
    right=NULL;
  }
};

class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void levelOrderPrint(TreeNode* root,int t,int l,vector<int>& v){
        if(root==NULL) return ;
        if(t==l){
            v.push_back(root->val);
            return ;
        }
        levelOrderPrint(root->left,t+1,l,v);
        levelOrderPrint(root->right,t+1,l,v);
    }
    void levelOrderPrintOpp(TreeNode* root,int t,int l,vector<int>& v){
        if(root==NULL) return ;
        if(t==l){
            v.push_back(root->val);
            return ;
        }
        levelOrderPrintOpp(root->right,t+1,l,v);
        levelOrderPrintOpp(root->left,t+1,l,v);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int>> ans;
        for(int i=1;i<=h;i++){
            vector<int> v;
            if(i%2!=0){
                levelOrderPrint(root,1,i,v);
                ans.push_back(v);
            }
            else{
                levelOrderPrintOpp(root,1,i,v);
                ans.push_back(v);
            }
        }
        return ans;
    }
};

int main(){
  
  return 0;
}
