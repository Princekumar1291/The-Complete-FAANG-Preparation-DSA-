//Problem Link: https://leetcode.com/problems/path-sum-iii/description/

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
    void hleper1(TreeNode* root,long long& targetSum,long long sum,long long& ans){
        if(root==NULL) return ;
        sum+=root->val;
        if(targetSum==sum) ans++;
        hleper1(root->left,targetSum,sum,ans);
        hleper1(root->right,targetSum,sum,ans);
    }
    void helper2(TreeNode* root, long long& targetSum,long long& ans){
        long long sum=0;
        if(root==NULL) return ;
        hleper1(root,targetSum,sum,ans);
        helper2(root->left,targetSum,ans);
        helper2(root->right,targetSum,ans);
    }
    int pathSum(TreeNode* root, long long targetSum) {
        long long ans=0;
        helper2(root,targetSum,ans);
        return ans;
    }
};

int main(){

  return 0;
}