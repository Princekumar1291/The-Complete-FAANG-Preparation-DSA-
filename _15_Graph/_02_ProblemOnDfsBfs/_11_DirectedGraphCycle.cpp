//Problem Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph


class Solution {
    public:
    bool dfs(int node,vector<int>& vis,vector<int>& dirVis,vector<int> adj[]){
        vis[node]=1;
        dirVis[node]=1;
        for(auto ele:adj[node]){
            if(vis[ele]==0) {
                bool temp=dfs(ele,vis,dirVis,adj);
                if(temp==true) return true;
            }
            else if(dirVis[ele]==1) return true;
        }
        dirVis[node]=0;
        return false;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        vector<int> dirVis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                if(dfs(i,vis,dirVis,adj)==true) return true;
            }
        }
        return false;
    }
};