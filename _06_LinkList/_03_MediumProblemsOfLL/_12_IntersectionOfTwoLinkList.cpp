// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/




class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        ListNode* temp=headA;
        while(temp!=NULL){
            st.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            if(st.find(temp)!=st.end()) return temp;
            temp=temp->next;
        }
        return NULL;
    }
};














class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1=headA;
        ListNode* d2=headB;
        while(d1 != d2) {
            d1 = d1 == NULL? headB:d1->next;
            d2 = d2 == NULL? headA:d2->next;
        }
        return d1;
    }
};







class Solution {
public:
    int ListSize(ListNode* head){
        int n=0;
        ListNode* temp=head;
        while(head!=NULL){
            n++;
            head=head->next;
        }
        return n;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n=ListSize(headA);
        int m=ListSize(headB);
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        
        if(m>n){
            swap(m,n);
            swap(tempA,tempB);
        }
        int t=n-m;

        for(int i=1;i<=t;i++){
            tempA=tempA->next;
        }
        
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};