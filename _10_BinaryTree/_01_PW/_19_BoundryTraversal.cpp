//Problem Link: https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article






class Solution {
    public:
      void fillLeft(Node* root,vector<int>& ans){
          Node* temp=root;
          while(temp->left!=NULL || temp->right!=NULL){
              ans.push_back(temp->data);
              if(temp->left!=NULL) temp=temp->left;
              else temp=temp->right;
          }
      }
      void fillNode(Node* root,vector<int>& ans){
          if(root==NULL) return ;
          if(root->left==NULL && root->right==NULL) {
              ans.push_back(root->data);
              return ;
          }
          fillNode(root->left,ans);
          fillNode(root->right,ans);
      }
      void fillRight(Node* root,vector<int>& ans){
          stack<int> st;
          Node* temp=root;
          while(temp->left!=NULL || temp->right!=NULL){
              st.push(temp->data);
              if(temp->right!=NULL) temp=temp->right;
              else temp=temp->left;
          }
          while(!st.empty()){
              ans.push_back(st.top());
              st.pop();
          }
      }
      vector<int> boundaryTraversal(Node *root) {
          // code here
          if(root->left==NULL && root->right==NULL) return {root->data};
          vector<int> ans;
          ans.push_back(root->data);
          if(root->left!=NULL) fillLeft(root->left,ans);
          fillNode(root,ans);
          if(root->right!=NULL) fillRight(root->right,ans);
          return ans;
      }
  };








class Solution {
public:
    bool isLeaf(Node* root){
        if(root->left==NULL && root->right==NULL) return true;
        return false;
    }
    void printLeft(Node* root,vector<int>& ans){
        while(root!=NULL){
            if(!isLeaf(root)) ans.push_back(root->data);
            if(root->left!=NULL) root=root->left;
            else root=root->right;
        }
    }
    void printLeaf(Node* root,vector<int>& ans){
        if(root==NULL) return ;
        if(isLeaf(root)) ans.push_back(root->data);
        printLeaf(root->left,ans);
        printLeaf(root->right,ans);
    }
    void printRight(Node* root,vector<int>& ans){
        stack<int> st;
        while(root!=NULL){
            if(!isLeaf(root)) st.push(root->data);
            if(root->right!=NULL) root=root->right;
            else root=root->left;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    }
    vector <int> boundary(Node *root){
        vector<int> ans;
        if(root==NULL) return ans;
        if(!isLeaf(root)) ans.push_back(root->data);
        printLeft(root->left,ans);
        printLeaf(root,ans);
        printRight(root->right,ans);
        return ans;
    }
};