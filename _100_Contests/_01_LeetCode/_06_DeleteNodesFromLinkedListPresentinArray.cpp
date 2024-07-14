//Probelm Link: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/




class Solution {
public:
    void deleteNode(ListNode*& head,unordered_set<int>& st){
        if(head==NULL) return;
        if(st.find(head->val)!=st.end()){ 
            while(head!=NULL && st.find(head->val)!=st.end()){
                head=head->next;
            }
        }
        if(head->next!=NULL){
            ListNode* temp=head->next;
            ListNode* prev=head;
            while(temp!=NULL){
                if(st.find(temp->val)!=st.end()){
                    prev->next=temp->next;
                    temp=temp->next;
                }
                else{
                    prev=temp;
                    temp=temp->next;
                }
            }
        }
    }
    void helper(unordered_set<int>& st,vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;
        helper(st,nums);
        deleteNode(head,st);
        return head;
    }
};