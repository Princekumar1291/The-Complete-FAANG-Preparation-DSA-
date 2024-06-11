// Problem Link: https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
            if(n>100000) return true;
        }
        return false;
    }
};




class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};



class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(!mp.empty() && mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]++;
            temp=temp->next;
        }
        return false;
    }
};