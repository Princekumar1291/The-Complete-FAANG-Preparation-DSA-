// Problem Link: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-doubly-linked-list





Node* reverseDLL(Node * head){
  vector<int> v;
  Node* temp=head;
  while(temp!=NULL){
      v.push_back(temp->data);
      temp=temp->next;
  }
  reverse(v.begin(),v.end());
  head=new Node(v[0]);
  temp=head;
  for(int i=1;i<v.size();i++){
      Node* newNode=new Node(v[i]);
      temp->next=newNode;
      newNode->prev=temp;
      temp=newNode;
  }
  return head;
}




Node* reverseDLL2(Node * head)
{
    //Your code here
    if(head==NULL || head->next==NULL) return head;
    Node* temp=head;
    while(temp!=NULL){
        swap(temp->prev,temp->next);
        if(temp->prev!=NULL)temp=temp->prev;
        else return temp;
    }
    return temp;
}