//Problem Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph


class Solution {
public:
    bool isLoop(vector<vector<int>>& adj,vector<int>& vis,vector<int>& dirVis,int start){
        vis[start]=1;
        dirVis[start]=1;
        for(int ele:adj[start]){
            if(vis[ele]==0){
                vis[ele]=1;
                bool temp=isLoop(adj,vis,dirVis,ele);
                if(temp) return temp;
            }
            else if(dirVis[ele]==1) return true;
        }
        dirVis[start]=0;
        return false;
    }
    bool isCyclic(int v, vector<vector<int>> &edges) {
        vector<vector<int>> adj(v,vector<int>());
        for(auto arr:edges){
            int ele1=arr[0];
            int ele2=arr[1];
            adj[ele1].push_back(ele2);
        }
        vector<int> vis(v,0);
        vector<int> dirVis(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                bool ans=isLoop(adj,vis,dirVis,i);   
                if(ans==true) return true;
            }
        }
        return false;
    }
};