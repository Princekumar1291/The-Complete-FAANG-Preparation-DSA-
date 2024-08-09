//Problem Link: https://www.geeksforgeeks.org/problems/topological-sort/1



class Solution
{
	public:
	void helper(int node,vector<int>& vis,vector<int> adj[],vector<int>& ans){
	    vis[node]=1;
	    for(int ele:adj[node]){
	        if(vis[ele]==0){
	            helper(ele,vis,adj,ans);
	        }
	    }
	    ans.push_back(node);
	}
	vector<int> topoSort(int v, vector<int> adj[]){
	    vector<int> vis(v,0);
	    vector<int> ans;
	    for(int i=0;i<v;i++){
	        if(vis[i]==0){
	            helper(i,vis,adj,ans);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	   return ans;
	}
};