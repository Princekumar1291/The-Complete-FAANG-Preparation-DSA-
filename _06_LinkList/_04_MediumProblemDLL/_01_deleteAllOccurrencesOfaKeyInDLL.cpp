//Problem Link: https://www.naukri.com/code360/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461?utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Linkedlistseries&leftPanelTabValue=SUBMISSION


Node * deleteAllOccurrences(Node* head, int k) {
    if(head==NULL) return head;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            Node* prv=temp->prev;
            Node* nxt=temp->next;
            if(prv==nxt) return NULL;
            if(prv==NULL){
                head=head->next;
                head->prev=NULL;
                temp=temp->next;
            }
            else if(nxt==NULL){
                prv->next=NULL;
                temp->prev=NULL;
                temp=temp->next;
            }
            else{
                prv->next=nxt;
                nxt->prev=prv;
                temp->prev=NULL;
                Node* t=temp;
                temp=temp->next;
                t->next=NULL;
            }
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}
