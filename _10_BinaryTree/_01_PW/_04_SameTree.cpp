// Problem LinkL: https://leetcode.com/problems/same-tree/description/


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
    void helper(TreeNode* p, TreeNode* q,bool& ans) {
        if(p==NULL && q==NULL) {
            ans=ans&&true;
            return ;
        }
        else if(p==NULL && q!=NULL){
            ans=ans&&false;
            return ;
        }
        else if(p!=NULL && q==NULL){
            ans=ans&&false;
            return ;
        }
        else if(p->val!=q->val) ans=ans&&false;
        helper(p->left,q->left, ans);
        helper(p->right,q->right, ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=true;
        helper(p,q,ans);
        return ans;
    }
};



class Solution {
public:
    bool check=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL && q!=NULL) return false;
        if(p!=NULL && q==NULL) return false;

        if(p->val!=q->val) return false;
        bool leftAns=isSameTree(p->left,q->left);
        if(leftAns==false) return false;
        bool rightAns=isSameTree(p->right,q->right);
        if(rightAns==false) return false;

        return true;
    }
};


int main(){
  
  return 0;
}