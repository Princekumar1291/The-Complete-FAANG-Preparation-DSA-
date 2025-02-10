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
  if(l==k) cout<<root->val<<" ";
  printNthLevel(root->left,l+1,k);
  printNthLevel(root->right,l+1,k);
}

void printNthLevelReverse(Node* root,int l,int k){
  if(root==NULL) return ;
  if(l==k) cout<<root->val<<" ";
  printNthLevel(root->right,l+1,k);
  printNthLevel(root->left,l+1,k);
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

  printNthLevel(a,1,3);


  return 0;
}