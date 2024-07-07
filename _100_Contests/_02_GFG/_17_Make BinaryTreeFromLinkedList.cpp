class Solution {
  public:
    void convert(Node *head, TreeNode *&root) {
        vector<int> ans;
        while(head!=NULL){
            ans.push_back(head->data);
            head=head->next;
        }
        int n=ans.size();
        root=new TreeNode(ans[0]);
        queue<TreeNode*> q;
        int i=1;
        int j=2;
        q.push(root);
        while(i<n){
            TreeNode* temp=q.front();
            q.pop();
            if(i<n) {
                temp->left=new TreeNode(ans[i]);
                q.push(temp->left);
            }
            if(j<n) {
                temp->right=new TreeNode(ans[j]);
                q.push(temp->right);
            }
            i+=2;
            j+=2;
        }
    }
};
