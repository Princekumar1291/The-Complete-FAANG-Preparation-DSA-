// Problem Link: https://leetcode.com/problems/odd-even-linked-list/submissions/1285592184/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> even;
        vector<int> odd;
        ListNode* p=head;
        ListNode* n=head->next;
        while(n!=NULL && n->next!=NULL && p!=NULL && p->next!=NULL){
            even.push_back(p->val);
            odd.push_back(n->val);
            p=p->next->next;
            n=n->next->next;
        }
        if(p!=NULL) even.push_back(p->val);
        if(n!=NULL) odd.push_back(n->val);

        ListNode* newHead=new ListNode(even[0]);
        ListNode* temp=newHead;
        for(int i=1;i<even.size();i++){
            ListNode* newNode=new ListNode(even[i]);
            temp->next=newNode;
            temp=newNode;
        }
        for(int i=0;i<odd.size();i++){
            ListNode* newNode=new ListNode(odd[i]);
            temp->next=newNode;
            temp=newNode;
        }
        return newHead;
    }
};




class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* head1=head;
        ListNode* head2=head->next;

        ListNode* curr1=head1;
        ListNode* curr2=head2;

        ListNode* temp1=head1;
        ListNode* temp2=head2;
        while(temp1!=NULL && temp2!=NULL && temp1->next!=NULL && temp2->next!=NULL){
            temp1=temp1->next->next;
            temp2=temp2->next->next;
            curr1->next=temp1;
            curr2->next=temp2;
            curr1=temp1;
            curr2=temp2;
        }
        if(temp1!=NULL) curr1=temp1;
        if(temp2!=NULL) curr2=temp2;

        temp1->next=head2;
        return head1;
    }
};





class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* head1=head;
        ListNode* head2=head->next;

        ListNode* temp=head->next->next;
        int c=2;

        ListNode* curr1=head1;
        ListNode* curr2=head2;
        while(temp!=NULL){
            c++;
            if(c%2==1) {
                curr1->next=temp;
                curr1=temp;
            }
            else {
                curr2->next=temp;
                curr2=temp;
            }
            temp=temp->next;
        }
        curr1->next=head2;
        curr2->next = nullptr; // terminate the even list
        return head1;
    }
};