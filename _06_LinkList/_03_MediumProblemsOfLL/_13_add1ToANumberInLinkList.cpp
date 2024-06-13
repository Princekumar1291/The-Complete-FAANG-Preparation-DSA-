// problem Link: https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list





#include <bits/stdc++.h>
class Solution
{
    public:
    Node* addOne(Node *head) {
        string s;
        Node* temp=head;
        while(temp!=NULL){
            s+=to_string(temp->data);
            temp=temp->next;
        }
        int n=s.size();
        reverse(s.begin(),s.end());
        string ans;
        int carry=1;
        for(int i=0;i<n;i++){
            char c=s[i];
            string ss="";
            ss+=c;
            int temp=stoi(ss)+carry;
            carry=temp/10;
            int t=temp%10;
            ans+=to_string(t);
        }
        if(carry) ans+="1";
        reverse(ans.begin(),ans.end());
        // cout<<ans<<endl;
        Node* newHead=new Node(ans[0]-'0');
        Node* tt=newHead;
        for(int i=1;i<ans.size();i++){
            Node* temp=new Node(ans[i]-'0');
            tt->next=temp;
            tt=temp;
        }
        return newHead;
    }
};









// Back Tracking
class Solution
{
    public:
    
    int helper(Node* head){
        if(head==NULL) return 1;
        int carry=helper(head->next);
        head->data=head->data+carry;
        if(head->data==10) {
            head->data=0;
            return 1;
        }
        return 0;
    }
    
    Node* addOne(Node *head){
        int carry=helper(head);
        if(carry==1){
            Node* newHead=new Node(1);
            newHead->next=head;
            return newHead;
        }
        return head;
    }
};