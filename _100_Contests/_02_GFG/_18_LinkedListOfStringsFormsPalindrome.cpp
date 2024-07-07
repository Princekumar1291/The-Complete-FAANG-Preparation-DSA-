class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string ans="";
        while(head!=NULL){
            ans+=head->data;
            head=head->next;
        }
        string revAns=ans;
        reverse(revAns.begin(),revAns.end());
        return ans==revAns;
    }
};