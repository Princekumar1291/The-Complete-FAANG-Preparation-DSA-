//Problem Link: https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/




class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        typedef pair<int,pair<int,int>> pp;
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i][0]);
            mini=min(mini,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }

        int maxiTemp=maxi;
        while(true){
            auto temp=pq.top();pq.pop();
            int a=temp.first;
            int b=temp.second.first;
            int c=temp.second.second+1;

            if(c<nums[b].size()){
                pq.push({nums[b][c],{b,c}});
                maxiTemp=max(maxiTemp,nums[b][c]);
                auto temp=pq.top();
                int d=temp.first;
                int diff=maxiTemp-d;
                if(diff<maxi-mini){
                    mini=d;
                    maxi=maxiTemp;
                }
            }
            else break;
        }
        return {mini,maxi};
    }
};