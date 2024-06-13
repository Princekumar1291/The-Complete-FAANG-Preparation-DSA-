// Problem link: https://leetcode.com/problems/add-two-numbers/description/






class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* newHead=new ListNode(1);  //dumy node
        ListNode* temp=newHead;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL){
            int sum=temp1->val+temp2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            int sum=temp1->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            int sum=temp2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode* newNode=new ListNode(sum);
            temp->next=newNode;
            temp=newNode;
            temp2=temp2->next;
        }
        newHead=newHead->next;
        if(carry) {
            temp->next=new ListNode(1);
        }
        return newHead;
    }
};