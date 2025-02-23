// https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1


int findCeil(Node* root, int input) {
  if (root == NULL) return -1;
  int ans=-1;
  while(root!=NULL){
      if(root->data==input) return input;
      else if(input<root->data) {
          ans=root->data;
          root=root->left;
      }
      else{
          root=root->right;
      }
  }
  return ans;
  
}