#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    next=NULL;
  }
};
void display(Node* head){
  while(head!=NULL) {
    cout<<head->val<<" ";
    head=head->next;
  }cout<<endl;
}
int main(){
  int arr[]={1,2,13,4,55};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=new Node(arr[0]);
  Node* temp=head;
  for(int i=1;i<n;i++){
    Node* newNode=new Node(arr[i]);
    temp->next=newNode;
    temp=temp->next;
  }

  display(head);
  return 0;
}