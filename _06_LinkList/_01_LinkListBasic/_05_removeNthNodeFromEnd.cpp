/*


class Solution {
public:
    int ListSize(ListNode* head){
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=ListSize(head);
        n=size-n;
        if(n==0) {
            head=head->next;
        }
        else{
            ListNode* temp=head;
            for(int i=1;i<n;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        return head;
    }
};


*/