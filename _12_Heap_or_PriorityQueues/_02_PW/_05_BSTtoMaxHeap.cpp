//Problem Link: https://www.geeksforgeeks.org/problems/bst-to-max-heap/1



class Solution{
  public:
      void helper(Node* root,stack<int>& st){
          if(root==NULL) return ;
          helper(root->left,st);
          st.push(root->data);
          helper(root->right,st);
      }
      void helper2(Node* root,stack<int>& st){
          if(root==NULL) return;
          root->data=st.top();
          st.pop();
          helper2(root->right,st);
          helper2(root->left,st);
      }
    void convertToMaxHeapUtil(Node* root)
    {
        stack<int> st;
        helper(root,st);
        helper2(root,st);
    }    
};
