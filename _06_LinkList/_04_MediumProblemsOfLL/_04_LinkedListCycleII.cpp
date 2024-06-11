// Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()) return temp;
            mp[temp]++;
            temp=temp->next;
        }
        return NULL;
    }
};




class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(fast==NULL || fast->next==NULL) return NULL;
        slow=head;
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};