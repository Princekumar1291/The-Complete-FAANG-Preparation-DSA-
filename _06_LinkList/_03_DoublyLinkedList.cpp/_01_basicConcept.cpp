#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* next;
  Node* back;
  Node(int val){
    this->val=val;
    next=back=nullptr;
  }
};

void display(Node* head){
  while(head!=NULL){
    cout<<head->val<<" ";
    head=head->next;
  }cout<<endl;
}


// Problem Link: https://www.naukri.com/code360/problems/introduction-to-doubly-linked-list_8160413?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&nps=true
Node* arrayToLinkList(int arr[],int n){
  Node* head=new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<n;i++){
    Node* newNode=new Node(arr[i]);
    newNode->back=prev;
    prev->next=newNode;
    prev=newNode;
  }
  return head;
}


// Problem Link:https://www.naukri.com/code360/problems/insert-before-the-given-node-of-a-doubly-linked-list_9719100?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries
Node* deleteHead(Node* head){
  if(head->next==NULL) return NULL;
  head=head->next;
  head->back=NULL;
  return head;
}

Node* deleteTail(Node* head){
  if(head==NULL || head->next==NULL) return NULL;
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  Node* tail=temp;
  temp->back->next=NULL;
  tail->back=NULL;
  return head;
}


// Problem Link: https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjVTeTRid0xvdlpzRUkzdGdIN1NsSnBJTWpsUXxBQ3Jtc0tsNlF4VnpxY1hzaTJkNmQwbjktREt6VXFKRjRNRWJRMDJUbGVTck5sdXpweXpmLVZEQkNOU3lEc05RWWN0emVlT2Y5cXI2Q0ZJMXBBcUQ5ZXNKNUJhOXVpemlHZDNEc2Z5WmRqUkNwX010c2xaTlhkSQ&q=https%3A%2F%2Ftinyurl.com%2Fytau6hwn&v=0eKMU10uEDI
Node* deleteAtKth(Node* head,int k){
  if(head==NULL) return NULL;
  if(k==1){
    if(head==NULL || head->next==NULL) return NULL;
    else{
      head=head->next;
      head->back=NULL;
      return head;
    }
  }
  int c=0;
  Node* temp=head;
  while(temp!=NULL){
    c++;
    if(c==k){
      break;
    }
    temp=temp->next;
  }
  Node* p=temp->back;
  Node* n=temp->next;
  if(n==NULL){
    //At end
    temp->back->next=NULL;
    temp->back=NULL;
  }
  else{
    temp->back->next=temp->next;
    temp->next->back=temp->back;
  }
  return head;
}



// Problem Link: https://www.naukri.com/code360/problems/non-head-node-deletion_9719173?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&nps=true&leftPanelTabValue=SUBMISSION
void deleteNode(Node* node) {
  if(node->next==NULL){
      Node* t=node;
      node->back->next=NULL;
      t->back=NULL;
  }else{
      node->back->next=node->next;
      node->next->back=node->back;
  }
}



// Problem Link: https://www.naukri.com/code360/problems/insert-at-the-front-of-a-doubly-linked-list_9697366?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&nps=true&leftPanelTabValue=SUBMISSION
Node* insertAtHead(Node* head,int ele){
  Node* newNode=new Node(ele);
  if(head==NULL) return newNode;
  newNode->next=head;
  head->back=newNode;
  head=newNode;
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
  newNode->back=temp;
  return head;
}

int main(){
  int arr[]={10,20,30,40,50,60,70,80,90,100};
  int n=sizeof(arr)/sizeof(arr[0]);

  Node* head=arrayToLinkList(arr,n);
  display(head);

  head=deleteHead(head);
  display(head);

  head=deleteTail(head);
  display(head);

  head=deleteAtKth(head,8);
  display(head);

  head=insertTail(head,8);
  display(head);

  return 0;
}