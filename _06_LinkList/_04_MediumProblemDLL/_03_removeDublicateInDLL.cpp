// Problem Link: https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicates-from-a-sorted-doubly-linked-list



class Solution{
public:
    Node * removeDuplicates(struct Node *head){
        if(head==NULL || head->next==NULL) return head;
        Node* temp1=head;
        Node* temp2=head->next;
        while(temp2!=NULL){
            if(temp1->data!=temp2->data){
                temp1->next=temp2;
                temp2->prev=temp1;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                temp2=temp2->next;
            }
        }
        temp1->next=temp2;
        return head;
    }
};