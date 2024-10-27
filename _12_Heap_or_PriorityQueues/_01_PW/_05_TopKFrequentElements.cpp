//Problem Link: https://leetcode.com/problems/top-k-frequent-elements/description/




class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<vector<int>> temp;
        for(auto ele:mp){
            temp.push_back({ele.second,ele.first});
        }
        sort(temp.begin(),temp.end(),greater<vector<int>>());

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i][1]);
        }
        return ans;
    }
};





class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int ele:nums) mp[ele]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto ele:mp){
            pq.push({ele.second,ele.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};