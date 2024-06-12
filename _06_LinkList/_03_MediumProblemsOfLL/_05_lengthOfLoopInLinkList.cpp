int countNodesinLoop(struct Node *head){
    unordered_map<Node*,int> mp;
    Node* temp=head;
    int c=1;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            return c-mp[temp];
        }
        mp[temp]=c++;
        temp=temp->next;
    }
    return 0;
}





int countNodesinLoop(struct Node *head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int c=1;
            slow=slow->next;
            while(slow!=fast){
                slow=slow->next;
                c++;
            }
            return c;
        }
    }
    return 0;
}