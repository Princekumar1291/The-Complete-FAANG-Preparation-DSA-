class Solution
{
    public:
    vector<int> topView(Node *root){
        vector<int> ans;
        map<int,map<int,int>> mp;
        queue<pair<Node*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            Node* node=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            if(mp.find(x)==mp.end()){
                mp[x][y]=node->data;
            }
            if(node->left!=NULL) q.push({node->left,{x-1,y+1}});
            if(node->right!=NULL) q.push({node->right,{x+1,y+1}});
        }
        for(auto ele:mp){
            for(auto el:ele.second){
                ans.push_back(el.second);
            }
        }
        return ans;
    }

};