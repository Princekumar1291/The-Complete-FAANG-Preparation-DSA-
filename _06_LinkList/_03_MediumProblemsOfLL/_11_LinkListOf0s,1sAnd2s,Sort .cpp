// Problem Link: https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it

class Solution{
public:
  Node *segregate(Node *head){
    int z = 0;
    int o = 0;
    int t = 0;
    Node *temp = head;
    while (temp != NULL){
      if (temp->data == 0)
        z++;
      else if (temp->data == 1)
        o++;
      else
        t++;
      temp = temp->next;
    }
    temp = head;
    while (temp != NULL){
      if (z > 0){
        temp->data = 0;
        z--;
      }
      else if (o > 0){
        temp->data = 1;
        o--;
      }
      else{
        temp->data = 2;
        t--;
      }
      temp = temp->next;
    }
    return head;
  }
};









class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==NULL || head->next==NULL) return head;
        Node* zeros=new Node(-1);
        Node* ones=new Node(-1);
        Node* twos=new Node(-1);
        
        Node* temp1=zeros;
        Node* temp2=ones;
        Node* temp3=twos;
        
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0) {
                temp1->next=temp;
                temp1=temp1->next;
            }
            else if(temp->data==1){
                temp2->next=temp;
                temp2=temp2->next;
            }
            else{
                temp3->next=temp;
                temp3=temp3->next;
            }
            temp=temp->next;
        }
        temp3->next=NULL;
        ones->next!=NULL ? temp1->next=ones->next : temp1->next=twos->next;
        if (ones->next != NULL) temp2->next=twos->next;
        return zeros->next;
    }
};