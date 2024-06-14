// Problme Link: https://leetcode.com/problems/sort-list/


class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head;
        for(int i=0;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};






class Solution {
public:
    ListNode* midNodeFun(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* helper(ListNode* left,ListNode* right){

        ListNode* newHead=new ListNode(-1);  //Dumy Node
        ListNode* temp=newHead;
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        
        while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        return newHead->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* midNode=midNodeFun(head);
        ListNode* left=head;
        ListNode* right=midNode->next;
        midNode->next=NULL;
        left=sortList(left);
        right=sortList(right);
        return helper(left,right);
    }
};