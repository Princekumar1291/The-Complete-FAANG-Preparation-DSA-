//Problem Link: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1




class Solution {
  public:
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        vector<int> vis(v,0);
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            bfs.push_back(temp);
            for(auto ele:adj[temp]){
                if(vis[ele]==0){
                    vis[ele]=1;
                    q.push(ele);
                }
            }
        }
        return bfs;
    }
};

// space--> O(3v) 
// Time-->O(v+2e)