#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left,*right;
  Node(int val){
    data=val;
    left=right=NULL;
  }
};

Node* root=NULL;

void insert(int val){
  Node* temp=new Node(val);
  if(root==NULL){
    root=temp;
    return;
  }
  Node* curr=root,*par=NULL;
  while(curr){
    par=curr;
    if(val<curr->data) curr=curr->left;
    else curr=curr->right;
  }
  if(val<par->data) par->left=temp;
  else par->right=temp;
}

void preOrder(Node* curr){
  if(curr==NULL) return;
  cout<<curr->data<<" ";
  preOrder(curr->left);
  preOrder(curr->right);
}

void levelOrderTrav(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}

int main(){
  insert(5);
  insert(3);
  insert(6);
  insert(1);
  insert(4);
  preOrder(root);
  cout<<endl;

  levelOrderTrav(root);
  return 0;
}
