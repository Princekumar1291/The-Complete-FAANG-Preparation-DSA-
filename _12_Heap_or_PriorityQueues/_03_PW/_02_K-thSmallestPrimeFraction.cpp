//Problem Link: https://leetcode.com/problems/k-th-smallest-prime-fraction/description/


class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<double>> v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                v.push_back({1.0*arr[i]/arr[j],(double)arr[i],(double)arr[j]});
            }
        }
        sort(v.begin(),v.end());
        return {(int)v[k-1][1],(int)v[k-1][2]};
    }
};
