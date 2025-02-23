// https://www.geeksforgeeks.org/problems/floor-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-bst


class Solution{
  public:
      int floor(Node* root, int x) {
          // Code here
          int ans=-1;
          while(root){
              if(root->data==x) return x;
              else if(x<root->data){
                  root=root->left;
              }
              else{
                  ans=root->data;
                  root=root->right;
              }
          }
          return ans;
      }
  };