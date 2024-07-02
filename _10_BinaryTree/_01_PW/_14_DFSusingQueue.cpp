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

void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
    Node* t=q.front();
    q.pop();
    cout<<t->val<<" ";
    if(t->left!=NULL) q.push(t->left);
    if(t->right!=NULL) q.push(t->right);
  }
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

    
    levelOrderTraversal(a);


  return 0;
}



