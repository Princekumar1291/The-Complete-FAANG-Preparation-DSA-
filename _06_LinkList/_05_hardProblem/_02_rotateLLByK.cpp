// Problem  Link: https://leetcode.com/problems/rotate-list/




class Solution {
public:
    int ListSize(ListNode* head){
        int n=0;
        while(head!=NULL){
            n++;
            head=head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int n=ListSize(head);
        k=k%n;
        k=(n-k)%n;
        if(k==0) return head;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            if(c==k) break;
            temp=temp->next;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;

        ListNode* temp2=newHead;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=head;
        return newHead;
    }
};







class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return head;
        ListNode *tail = head;
        int cnt = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            cnt++;
        }
        k = k % cnt;
        if (k== 0) return head;
        ListNode *n = head;
        int a = 1;
        while (a != cnt-k) {
            n = n->next;
            a++;
        }
        ListNode* ret = n->next;
        n->next = nullptr;
        tail->next = head;
        return ret;
    }
};