//Problem Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/

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
    Node* helper(vector<int>& in,int il,int ih,vector<int>& po,int pl,int ph){
        if(il>ih) return NULL;
        if(il==ih) return new Node(po[ph]);
        Node* root=new Node(po[ph]);
        int i=il;
        while(i<=ih){
            if(po[ph]==in[i]) break;
            i++;
        }
        int lc=i-il;
        int rc=ih-i;
        root->left=helper(in,il,il+lc-1,po,pl,pl+lc-1);
        root->right=helper(in,ih-rc+1,ih,po,ph-rc,ph-1);
        return root;
    }
    Node* buildTree(vector<int>& in, vector<int>& po) {
        int n=in.size();
        return helper(in,0,n-1,po,0,n-1);
    }
};

int main(){
  return 0;
}