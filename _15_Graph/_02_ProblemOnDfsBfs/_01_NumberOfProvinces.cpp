//Problem Link: https://www.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number_of_provinces




class Solution {
  public:
    void dfs(int node,vector<int>& vis,vector<vector<int>>& graph){
        vis[node]=1;
        for(auto ele:graph[node]){
            if(vis[ele]==0) dfs(ele,vis,graph);
        }
    }
    int numProvinces(vector<vector<int>> adj, int v) {
        // code here
        vector<vector<int>>adjList (v,vector<int>());
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(adj[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<int> vis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                ans++;
                dfs(i,vis,adjList);
            }
        }
        return ans;
    }
};