#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};

class Stack{
  public:
  int size;
  Node* head;
  Stack(){
    head=NULL;
    size=0;
  }
  void push(int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
  }
  void display(Node* head){
    while(head!=NULL){
      cout<<head->val<<" ";
      head=head->next;
    }cout<<endl;
  }
  void pop(){
    if(size==0){
      cout<<"Stack is empty";
    }
    else{
      head=head->next;
      size--;
    }
  }
  void top(){
    if(size==0) cout<<"No ele exit";
    else{
      cout<<head->val<<endl;
    }
  }
};

int main(){
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.pop();
  st.display(st.head);
  cout<<st.size<<endl;
  st.top();
  return 0;
}