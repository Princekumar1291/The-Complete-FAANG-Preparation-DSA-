//Problem Link: https://geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1




class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int> indegree(v,0);
        for(int i=0;i<v;i++){
            for(int ele:adj[i]){
                indegree[ele]++;
            }
        }
        
        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i]==0) q.push(i);
        }
        
        vector<int> topoSort;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            topoSort.push_back(curr);
            for(int ele:adj[curr]){
                indegree[ele]--;
                if(indegree[ele]==0) q.push(ele);
            }
        }
        return topoSort.size()<v ? true :false;
    }
};