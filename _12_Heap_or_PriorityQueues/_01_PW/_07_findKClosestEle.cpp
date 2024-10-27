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


vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n=arr.size();
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++){
        pq.push({abs(x-arr[i]),arr[i]});
        if(pq.size()>k) pq.pop();
    }
    vector<int> ans;
    while(pq.size()>0) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}