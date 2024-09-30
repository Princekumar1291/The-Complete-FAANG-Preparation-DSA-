Problem Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list//





class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int mid=n/2;
        if(head->next==NULL) {
            head=NULL;
            return head;
        }
        
        temp=head;
        for(int i=1;i<=mid-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next; 
        return head;
    }
};






class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        if(head->next->next==NULL) {
            head->next=NULL;
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next->next!=NULL && fast->next->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};




class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        if(head->next->next==NULL) {
            head->next=NULL;
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};