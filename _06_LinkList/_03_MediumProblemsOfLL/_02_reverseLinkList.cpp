// Problem Link: https://leetcode.com/problems/reverse-linked-list/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        temp=head;
        int c=0;
        while(temp!=NULL){
            temp->val=v[c++];
            temp=temp->next;
        }
        return head;
    }
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* pv=NULL;
        while(temp!=NULL){
            ListNode* curr=temp->next;
            temp->next=pv;
            pv=temp;
            temp=curr;
        }
        return pv;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverseList(head->next);
        ListNode* nex=head->next;
        nex->next=head;
        head->next=NULL;
        return newHead;
    }
};

int main(){
  
  return 0;
}