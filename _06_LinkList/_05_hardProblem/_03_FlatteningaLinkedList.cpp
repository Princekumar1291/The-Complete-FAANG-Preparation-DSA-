// Problem Link: https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=flattening-a-linked-list



Node *flatten(Node *head){
    vector<int> v;
    Node* temp=head;
    while(temp!=NULL){
        Node* iTemp=temp;
        while(iTemp!=NULL){
            v.push_back(iTemp->data);
            iTemp=iTemp->bottom;
        }
        temp=temp->next;
    }
    sort(v.begin(),v.end());
    int n=v.size();
    if(n==0) return NULL;
    
    Node* newHead=new Node(v[0]);
    temp=newHead;
    for(int i=1;i<n;i++){
        Node* newNode=new Node(v[i]);
        temp->bottom=newNode;
        temp=newNode;
    }
    return newHead;
}