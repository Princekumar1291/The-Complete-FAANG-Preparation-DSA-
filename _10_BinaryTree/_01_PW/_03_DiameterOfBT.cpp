// Problem Link:  https://leetcode.com/problems/diameter-of-binary-tree/




#include<bits/stdc++.h>
using namespace std;

int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void helper(TreeNode* root,int& ans){
    if(root==NULL) return ;
    int dir=level(root->left)+level(root->right);
    ans=max(ans,dir);
    helper(root->left,ans);
    helper(root->right,ans);
}
int diameterOfBinaryTree(TreeNode* root) {
    int ans=0;
    helper(root,ans);
    return ans;
}


int main(){
  
  return 0;
}


class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        int left=level(root->left);
        int right=level(root->right);
        return 1+max(left,right);
    }
    int dia(TreeNode* root){
        if(root==NULL) return INT_MIN;
        int leftLevel=level(root->left);
        int rightLevel=level(root->right);
        int totLR=leftLevel+rightLevel;

        int left=dia(root->left);
        int right=dia(root->right);

        return max(totLR,max(left,right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return dia(root);
    }
};