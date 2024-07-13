//Problem Link: https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1


class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    void helper(Node* root,int i,int& mini,int& maxi){
        if(root==NULL) return;
        mini=min(i,mini);
        maxi=max(i,maxi);
        helper(root->left,i-1,mini,maxi);
        helper(root->right,i+1,mini,maxi);
    }
    int verticalWidth(Node* root) {
        // code here
        if(root==NULL) return 0;
        int mini=0,maxi=0,ans=0;
        helper(root,0,mini,maxi);
        ans=abs(mini)+abs(maxi)+1;
        return ans;
    }
};