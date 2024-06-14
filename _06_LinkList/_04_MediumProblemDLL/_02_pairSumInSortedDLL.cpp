// Problem Link: https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-pairs-with-given-sum-in-doubly-linked-list





class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int,int>> v;
        Node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        while(head->data<tail->data){
            if(head->data+tail->data==target){
                pair<int,int> p;
                p.first=head->data;
                p.second=tail->data;
                v.push_back(p);
                head=head->next;
                tail=tail->prev;
            }
            else if(head->data+tail->data<target){
                head=head->next;
            }
            else{
                tail=tail->prev;
            }
        }
        return v;
    }
};