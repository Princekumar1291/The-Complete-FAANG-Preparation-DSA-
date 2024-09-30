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





ListNode* oddEvenList(ListNode* head) {
    if (!head) return NULL;  // Handle empty list case

    ListNode* odd = new ListNode(0);  // Placeholder for odd nodes
    ListNode* temp1 = odd;             // Pointer to build odd list

    ListNode* even = new ListNode(0); // Placeholder for even nodes
    ListNode* temp2 = even;            // Pointer to build even list

    int index = 1; // Index to track odd/even position
    while (head) {
        if (index % 2 != 0) { // Odd index
            temp1->next = head;
            temp1 = temp1->next;
        } else { // Even index
            temp2->next = head;
            temp2 = temp2->next;
        }
        head = head->next;
        index++;
    }

    // Connect odd list to even list
    temp1->next = even->next; // Point last odd to first even
    temp2->next = nullptr;     // End the even list

    return odd->next;          // Return the new head of odd list
}