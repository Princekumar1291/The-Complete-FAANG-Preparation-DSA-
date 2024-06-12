// Problm link: 
// 1)https://www.naukri.com/code360/problems/introduction-to-linked-list_8144737?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries
// 2)https://www.naukri.com/code360/problems/count-nodes-of-linked-list_5884?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=SUBMISSION
// 3)https://www.naukri.com/code360/problems/search-in-a-linked-list_975381?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&nps=true&leftPanelTabValue=SUBMISSION
// 4)https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion
// 5)https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list
// 6)https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-linked-list-1664434326



// #include<bits/stdc++.h>
// using namespace std;
// class Node{  //linklist ka node
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node* a=new Node(10);  //allocation at run time
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     Node* temp=a;
//     while (temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
    
//     return 0;
// }
















// copy arr elements to linklist
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


int main(){
  int arr[10]={10,20,30,40,50,60,70,80,90,100};
  int n=sizeof(arr)/sizeof(arr[0]);
  Node* head=convertArrayToLinkList(arr,n);
  display(head);
  cout<<head->val<<endl;

  cout<<"LinkList Size:"<<linkListSize(head)<<endl;
  return 0;
}