//Problem Link:https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-undirected-graph-having-unit-distance





class Solution {
public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n, int m, int src) {
        vector<vector<int>> adj(n);
        
        // Building the adjacency list
        for(int i = 0; i < m; i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        vector<int> ans(n, -1); // Distance array initialized to -1
        queue<pair<int, int>> q;

        // Start BFS from the source node
        q.push({src, 0});
        ans[src] = 0;

        while(!q.empty()) {
            int currNode = q.front().first;
            int currDist = q.front().second;
            q.pop();

            // Process all neighbors of the current node
            for(int neighbor : adj[currNode]) {
                if(ans[neighbor] == -1) { // If not visited
                    ans[neighbor] = currDist + 1; // Update distance
                    q.push({neighbor, currDist + 1}); // Push neighbor to the queue
                }
            }
        }
        return ans;
    }
};