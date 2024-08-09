//Problem Link: https://leetcode.com/problems/is-graph-bipartite/description/




class Solution {
private:
    void helper(int node,vector<int>& vis,vector<vector<int>>& graph,bool& ans){
        queue<pair<int,int>> q;
        q.push({node,1});
        vis[node]=1;
        while(!q.empty()){
            int row=q.front().first;
            int color=q.front().second;
            q.pop();
            for(auto ele:graph[row]){
                if(vis[ele]==-1){
                    vis[ele]=!color;
                    q.push({ele,!color});
                }
                else{
                    if(vis[ele]==color){
                        ans=false;
                    }
                }
            }
        }
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,-1);
        bool ans=true;
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                helper(i,vis,graph,ans);
                if(ans==false) return false;
            }
        }
        return true;
    }
};