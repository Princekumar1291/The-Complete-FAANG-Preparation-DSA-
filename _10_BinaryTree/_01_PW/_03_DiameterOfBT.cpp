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