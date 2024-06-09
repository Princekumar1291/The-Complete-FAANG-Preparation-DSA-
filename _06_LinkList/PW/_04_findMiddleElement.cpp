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
    ListNode* middleNode(ListNode* head) {
        int n=ListSize(head);
        ListNode* temp=head;
        for(int i=1;i<=n/2;i++){
            temp=temp->next;
        }
        return temp;
    }
};


*/
