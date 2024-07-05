//Problem Link: https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            Node* node=temp.first;
            int x=temp.second;
            mp[x]=node->data;
            if(node->left!=NULL) q.push({node->left,x-1});
            if(node->right!=NULL) q.push({node->right,x+1});
        }
        for(auto ele:mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};