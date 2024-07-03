//Problem Link: https://leetcode.com/problems/path-sum-ii/

#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* left;
  Node* right;
  Node(int val){
    this->val=val;
    left=NULL;
    right=NULL;
  }
};
class Solution {
public:
    void helper(Node* root,int targetSum,int sum,vector<int>v,vector<vector<int>>& ans){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL) {
            sum+=root->val;
            v.push_back(root->val);
            if(sum==targetSum) ans.push_back(v);
            return;
        }
        v.push_back(root->val);
        sum+=root->val;
        helper(root->left,targetSum,sum,v,ans);
        helper(root->right,targetSum,sum,v,ans);
    }
    vector<vector<int>> pathSum(Node* root, int targetSum) {
        vector<vector<int>> ans;
        int sum=0;
        vector<int> v;
        helper(root,targetSum,sum,v,ans);
        return ans;
    }
};


int main(){

  return 0;
}