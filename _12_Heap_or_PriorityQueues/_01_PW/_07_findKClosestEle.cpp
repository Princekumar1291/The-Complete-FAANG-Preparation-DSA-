//Problem Link: https://leetcode.com/problems/find-k-closest-elements/description/




class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<vector<int>> v1;
        for(int i=0;i<arr.size();i++){
            v1.push_back({abs(x-arr[i]),arr[i]});
        }
        sort(v1.begin(),v1.end());

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v1[i][1]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};