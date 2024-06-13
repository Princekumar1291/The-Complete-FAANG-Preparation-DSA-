//Problem Link: https://www.naukri.com/code360/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=SUBMISSION


Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    if(head==NULL) return NULL;
    while(head->data==k){
        head=head->next;
        if(head==NULL) return NULL;
    }
    Node* temp1=head;
    Node* temp2=head->next;
    while(temp2!=NULL){
        if(temp2->data==k){
            temp1->next=temp1->next->next;
        }
        temp1=temp2;
        temp2=temp2->next;
    }
    return head;
}
