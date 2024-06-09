/*

void deleteNode(ListNode* node) {  //given node is the node that we want to delete
    node->val=node->next->val;
    node->next=node->next->next;
    return 0;
}


Node* deleteNode(Node* head,int target){
    if(head->val==target){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}




Node* middleNode(Node* head) {
    Node* temp=head;
    Node* temp2=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
        if(n%2==0) temp2=temp2->next;
    }
    return temp2;
}

*/