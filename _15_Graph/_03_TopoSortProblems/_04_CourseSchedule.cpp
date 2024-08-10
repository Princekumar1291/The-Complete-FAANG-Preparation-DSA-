//Problem Link: https://leetcode.com/problems/course-schedule/description/




class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(v,vector<int>());
        for(auto ele:prerequisites){
            adj[ele[1]].push_back(ele[0]);
        }
        vector<int> deg(v,0);
        for(int i=0;i<v;i++){
            for(int ele:adj[i]){
                deg[ele]++;
            }
        }
        queue<int> q;
        for(int i=0;i<v;i++){
            if(deg[i]==0) q.push(i);
        }

        vector<int> ans;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(int ele:adj[curr]){
                deg[ele]--;
                if(deg[ele]==0) q.push(ele);
            }
        }
        return ans.size()==v ? 1 : 0 ;
    }
};