// Problem Link: https://leetcode.com/problems/palindrome-linked-list/


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=v.size()-1;
        while(i<j){
            if(v[i]!=v[j]) return false;
            i++;j--;
        }
        return true;
    }
};





class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }   
        ListNode* newHead=reverseList(slow->next);
        ListNode* temp1=newHead;
        ListNode* temp2=head;
        while(temp1!=NULL){
            if(temp1->val!=temp2->val) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};