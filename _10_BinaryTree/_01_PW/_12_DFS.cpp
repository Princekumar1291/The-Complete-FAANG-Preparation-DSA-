//Problem Link: https://leetcode.com/problems/binary-tree-level-order-traversal/


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

void printNthLevel(Node* root,int l,int k){
  if(root==NULL) return ;
  l++;
  if(l==k) {
    cout<<root->val<<" ";
    return;
  }
  printNthLevel(root->left,l,k);
  printNthLevel(root->right,l,k);
}

void printNthLevelRtoL(Node* root,int l,int k){
  if(root==NULL) return ;
  l++;
  if(l==k) {
    cout<<root->val<<" ";
    return;
  }
  printNthLevel(root->right,l,k);
  printNthLevel(root->left,l,k);
}

int height(Node* root){
  if(root==NULL) return 0;
  return 1+max(height(root->left),height(root->right));
}

int main(){
  Node* a=new Node(1);
  Node* b=new Node(2);
  Node* c=new Node(3);
  Node* d=new Node(4);
  Node* e=new Node(5);
  Node* f=new Node(6);
  Node* g=new Node(7);

  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->left=f;
  c->right=g;

    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7

  int h=height(a);
  for(int i=1;i<=h;i++){
    printNthLevel(a,0,i);
  }cout<<endl;

  for(int i=1;i<=h;i++){
    printNthLevelRtoL(a,0,i);
  }cout<<endl;


  return 0;
}



class Solution {
public:
    int height(Node* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void printNthLevel(Node* root,int t,int l,vector<int>& v){
        if(root==NULL) return ;
        t++;
        if(t==l) {
            v.push_back(root->val);
            return ;
        }
        printNthLevel(root->left,t,l,v);
        printNthLevel(root->right,t,l,v);
    }
    vector<vector<int>> levelOrder(Node* root) {
        int h=height(root);
        vector<vector<int>> ans;
        for(int i=1;i<=h;i++){
            vector<int> v;
            printNthLevel(root,0,i,v);
            ans.push_back(v);
        }
        return ans;
    }
};