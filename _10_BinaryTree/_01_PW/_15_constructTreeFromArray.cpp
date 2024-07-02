
#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* left;
  Node* right;
  Node(int val){
    this->val=val;
    left=nullptr;
    right=nullptr;
  }
};


Node* treeFromArray(vector<int> v){
  queue<Node*> q;
  Node* root=new Node(v[0]);
  q.push(root);
  int i=1;
  int j=2;
  int n=v.size();
  while(j<n && !q.empty()){
    Node* temp=q.front();
    q.pop();
    Node* l;
    Node* r;
    if(v[i]!=INT_MIN){
      l=new Node(v[i]);
      temp->left=l;
      q.push(l);
    }
    else{
      l=NULL;
      temp->left=l;
    }
    if(v[j]!=INT_MIN){
      r=new Node(v[j]);
      temp->right=r;
      q.push(r);
    }
    else{
      r=NULL;
      temp->right=r;
    }
    i+=2;
    j+=2;
  }
  return root;
}

void print(Node* root){
  if(root==NULL) return ;
  cout<<root->val<<" ";
  print(root->left);
  print(root->right);
}

int main(){
  vector<int> v={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN}; //level Order Traversal
  Node* root=treeFromArray(v);
  print(root);
  return 0;
}