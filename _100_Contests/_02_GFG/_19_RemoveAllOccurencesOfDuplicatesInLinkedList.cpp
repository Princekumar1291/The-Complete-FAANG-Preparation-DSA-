//Problem Link: https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1



class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        unordered_map<int,int> mp;
        Node* temp=head;
        while(temp!=NULL){
            mp[temp->data]++;
            temp=temp->next;
        }
        
        temp=head;
        Node* ans=new Node(-1);
        Node* node=ans;
        while(temp!=NULL){
            int k=mp[temp->data];
            if(k==1) {
                node->next=new Node(temp->data);
                node=node->next;
            }
            temp=temp->next;
        }
        return ans->next;
    }
};