//Problem Link: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1





class Solution {
  public:
    void dfsFun(int node,vector<int>& dfs,vector<int>& vis,vector<int> adj[]){
        vis[node]=1;
        dfs.push_back(node);
        for(auto ele:adj[node]){
            if(vis[ele]==0){
                vis[ele]=1;
                dfsFun(ele,dfs,vis,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        int start=0;
        vector<int> dfs;
        vector<int> vis(v,0);
        dfsFun(start,dfs,vis,adj);
        return dfs;
    }
};


// t--> O(v+2e)