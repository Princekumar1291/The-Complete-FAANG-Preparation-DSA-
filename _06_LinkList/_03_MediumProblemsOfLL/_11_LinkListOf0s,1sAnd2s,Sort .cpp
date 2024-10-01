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









class Solution{
    public:
    Node* segregate(Node *head) {
        if(head == NULL || head->next == NULL) return head;
        Node* zeros = new Node(-1);
        Node* ones = new Node(-1);
        Node* twos = new Node(-1);
        
        Node* temp0 = zeros;
        Node* temp1 = ones;
        Node* temp2 = twos;
        
        Node* temp = head;
        while(temp != NULL) {
            if(temp->data == 0) {
                temp0->next = temp;
                temp0 = temp0->next;
            }
            else if(temp->data == 1) {
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else {
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        temp0->next=NULL;
        temp1->next=NULL;
        temp2->next=NULL;
        
        if(ones->next!=NULL){
            temp1->next=twos->next;
            temp0->next=ones->next;
            return zeros->next;
        }
        temp0->next=twos->next;
        return zeros->next;
    }
};