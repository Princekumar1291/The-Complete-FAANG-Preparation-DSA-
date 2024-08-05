//Problem Link: https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-adjacency-list



class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int v, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> graph(v,vector<int>());
        for(int i=0;i<edges.size();i++){
            auto p=edges[i];
            graph[p.first].push_back(p.second);
            graph[p.second].push_back(p.first);
        }
        return graph;
    }
};