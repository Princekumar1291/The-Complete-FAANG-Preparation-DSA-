#include<bits/stdc++.h>
using namespace std;
class Node{  //linklist ka node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

Node* convertArrayToLinkList(int arr[],int n){
  if(n==0) return nullptr;
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<n;i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}

void display(Node* head){
  while(head!=nullptr){
    cout<<head->val<<" ";
    head=head->next;
  }cout<<endl;
}

int linkListSize(Node* head){
  int n=0;
  while(head){
    n++;
    head=head->next;
  }
  return n;
}

int searchInLinkedList(Node* head, int k) {
    while(head){
        if(head->val==k) return 1;
        head=head->next;
    }
    return 0;
}

Node* deleteHead(Node* head){
  if(head==nullptr || head->next==nullptr) return nullptr;
  head=head->next;
  return head;
}

Node* deleteTail(Node* head){
  if(head==nullptr || head->next==nullptr) return nullptr;
  Node* temp=head;
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  temp->next=nullptr;
  return head;
}


//problem Link: https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
Node* deleteKthElement(Node* head,int k){
  if(k==1) {
    head=head->next;
    return head;
  }
  Node* temp=head;
  for(int i=2;i<=k-1;i++){
    if(temp->next==nullptr) break;
    temp=temp->next;
  }
  temp->next=temp->next->next;
  return head;
}

Node* deleteKth(Node* head,int k){
  if(k==1) return head->next;
  Node* prev=NULL;
  Node* temp=head;
  int c=0;
  while(temp!=NULL){
    c++;
    if(c==k){
      prev->next=prev->next->next;
    }
    prev=temp;
    temp=temp->next;
  }
}


Node* deleteElement(Node* head,int ele){
  if(head->val==ele) {
    head=head->next;
    return head;
  }
  Node* prev=NULL;
  Node* temp=head;
  while(temp!=NULL){
    if(temp->val==ele){
      prev->next=prev->next->next;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
}

Node* insertHead(Node* head,int ele){
  Node* temp=new Node(ele);
  temp->next=head;
  head=temp;
  return head;
}

Node* insertTail(Node* head,int ele){
  Node* newNode=new Node(ele);
  if(head==NULL) return newNode;

  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  return head;
}

Node* insertKth(Node* head,int k,int ele){
  Node* newNode=new Node(ele);
  if(k==1){
    newNode->next=head;
    head=newNode;
  }
  int c=0;
  Node* temp=head;
  while(temp!=NULL){
    c++;
    if(c==k-1){
      newNode->next=temp->next;
      temp->next=newNode;
      break;
    }
    temp=temp->next;
  }
  return head;
}

Node* insertBeforeEle(Node* head,int target,int ele){
  Node* newNode=new Node(ele);
  if(head->val==target){
    newNode->next=head;
    head=newNode;
    return head;
  }
  Node* temp=head;
  Node* prev=NULL;
  while(temp!=NULL){
    if(temp->val==target){
      newNode->next=temp;
      prev->next=newNode;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
}

int main(){
  int arr[]={10,20,30,40,50,60,70,80,90,100};
  // int arr[]={10};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convertArrayToLinkList(arr,n);
  display(head);
  // cout<<head->val<<endl;

  // cout<<"LinkList Size:"<<linkListSize(head)<<endl;

  // head=deleteHead(head);
  // display(head);

  // head=deleteTail(head);
  // display(head);

  // head=deleteKthElement(head,2);
  // display(head);

  // head= deleteElement(head,90);
  // display(head);

  // head= insertHead(head,90);
  // display(head);

  // head= insertTail(head,90);
  // display(head);

  // head= insertKth(head,1,200);
  // display(head);

  head= insertBeforeEle(head,60,200);
  display(head);

  return 0;
}