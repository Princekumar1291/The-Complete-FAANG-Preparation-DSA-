//Problem Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph






class Solution {
  public:
    void helper(int node,vector<int> adj[],vector<int>& vis,bool& ans){
        queue<pair<int,int>> q;
        q.push({node,-1});
        vis[node]=1;
        while(!q.empty()){
            int currNode=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto ele:adj[currNode]){  
                if(vis[ele]==0){
                    q.push({ele,currNode});
                    vis[ele]=1;
                }
                else{
                    if(ele!=parent) {
                        ans=true;
                        return;
                    }
                }
            }
        }
    }
    bool isCycle(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                bool ans=false;
                helper(i,adj,vis,ans);
                if(ans) return ans;
            }
        }
        return false;
    }
};