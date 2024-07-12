//Problem Link: https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1


class Solution {
  public:
    void helper(Node* root,bool& ans){
        if(root==NULL) return;
        if(root->left!=NULL && root->data<root->left->data){
            ans=false;
            return;
        }
        if(root->right!=NULL && root->data < root->right->data){
            ans=false;
            return;
        } 
        helper(root->left,ans);
        helper(root->right,ans);
    }
    void sizeBt(Node* root,int& n){
        if(root==NULL) return; 
        n++;
        sizeBt(root->left,n);
        sizeBt(root->right,n);
    }
    void helper2(Node* root,bool& ans){
        int n=0;
        sizeBt(root,n);
        queue<Node*> q;
        q.push(root);
        while(n>0){
            Node* temp=q.front();q.pop();
            if(temp!=NULL)q.push(temp->left);
            if(temp!=NULL)q.push(temp->right);
            n--;
        }
        while(!q.empty()){
            Node* temp=q.front();q.pop();
            if(temp!=NULL) {
                ans=false;
                return;
            }
        }
    }
    
    bool isHeap(struct Node* root) {
        bool ans=true;
        int n=0;
        helper(root,ans);
        if(!ans) return ans;
        helper2(root,ans);
        return ans;
    }
};