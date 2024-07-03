//Problem Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

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
    Node* helper(vector<int>& pre,int pl,int ph, vector<int>& in,int il,int ih){
        if(pl>ph) return NULL;
        if(pl==ph) return new Node(pre[pl]);
        Node* root=new Node(pre[pl]);
        int i=il;
        while(i<=ih){
            if(pre[pl]==in[i]) break;
            i++;
        }
        int lc=i-il;  //check
        int rc=ih-i;
        root->left=helper(pre,pl+1,pl+lc,in,il,il+lc);
        root->right=helper(pre,pl+lc+1,ph,in,il+lc+1,ih);
        return root;
        
    }
    Node* buildTree(vector<int>& pre, vector<int>& in){ 
        int n=pre.size();
        return helper(pre,0,n-1,in,0,n-1);
    } 
};

int main(){
  return 0;
}