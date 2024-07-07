class Solution {
  public:
    void inOrder(Node* root,Node*& temp){
        if(root==NULL) return;
        inOrder(root->right,temp);
        root->next=temp;
        temp=root;
        inOrder(root->left,temp);
    }
    void populateNext(Node *root) {
        if(root==NULL) return;
        Node* temp=NULL;
        inOrder(root,temp);
    }
};