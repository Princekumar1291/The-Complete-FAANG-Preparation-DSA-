// Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==1 && head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast=fast->next;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};