// [TortoiseHare Method]

// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};


class Solution {
public:
    int Lsize(ListNode* head){
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        return n;
    }
    ListNode* middleNode(ListNode* head) {
        int n=Lsize(head);
        int mid=n/2+1;
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c++;
            if(c==mid) break;
            temp=temp->next;
        }
        return temp;
    }
};


int main(){
  
  return 0;
}