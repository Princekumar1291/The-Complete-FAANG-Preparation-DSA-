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