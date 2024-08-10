//Problem Link: https://leetcode.com/problems/course-schedule-ii/description/



 
class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(v,vector<int>());
        for(auto arr:prerequisites){
            adj[arr[1]].push_back(arr[0]);
        }
        vector<int> indeg(v,0);
        for(auto arr:adj){
            for(int ele:arr){
                indeg[ele]++;
            }
        }

        queue<int> q;
        for(int i=0;i<v;i++){
            if(indeg[i]==0) q.push(i);
        }

        vector<int> ans;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(int ele:adj[curr]){
                indeg[ele]--;
                if(indeg[ele]==0) q.push(ele);
            }
        }
        return ans.size()==v ? ans : vector<int>(0);
    }
};