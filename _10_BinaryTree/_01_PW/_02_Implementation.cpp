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

void display1(Node* root){  //Pre Order
  if(root==NULL) return ;
  cout<<root->val<<" ";
  display1(root->left);
  display1(root->right);
} 

void display2(Node* root){  //In Order
  if(root==NULL) return ;
  display2(root->left);
  cout<<root->val<<" ";
  display2(root->right);
}

void display3(Node* root){  //Post Order
  if(root==NULL) return ;
  display3(root->left);
  display3(root->right);
  cout<<root->val<<" ";
}

int sum(Node* root){ 
  if(root==NULL) return 0;
  return root->val+sum(root->left)+sum(root->right);
}

int product(Node* root){ 
  if(root==NULL) return 1;
  return root->val*product(root->left)*product(root->right);
} 

int sizeofBT(Node* root){
  if(root==NULL) return 0;
  return 1+sizeofBT(root->left)+sizeofBT(root->right);
}

int maxInBT(Node* root){
  if(root==NULL) return INT_MIN;
  return max(root->val,max(maxInBT(root->left),maxInBT(root->right)));
}

int minInBT(Node* root){
  if(root==NULL) return INT_MAX;
  return min(root->val,min(minInBT(root->left),minInBT(root->right)));
}

int level(Node* root){
  if(root==NULL) return 0;
  return 1+max(level(root->left),level(root->right));
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


  display1(a);cout<<endl;
  display2(a);cout<<endl;
  display3(a);cout<<endl;

  cout<<sum(a)<<endl;
  cout<<sizeofBT(a)<<endl;
  cout<<maxInBT(a)<<endl;
  cout<<product(a)<<endl;
  cout<<minInBT(a)<<endl;
  cout<<level(a)<<endl;

  return 0;
}