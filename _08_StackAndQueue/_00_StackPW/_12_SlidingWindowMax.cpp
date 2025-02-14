//Problem Link: https://leetcode.com/problems/sliding-window-maximum/description/


#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  vector<int> v;
  int n=nums.size()-k+1;
  for(int i=0;i<n;i++){
    int max=INT_MIN;
    for(int j=i;j<k+i;j++){
        if(max<nums[j]) max=nums[j];
    }
    v.push_back(max);
  }
  return v;
}

#include <vector>
#include <queue>
#include <utility>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return {}; 
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            pq.push({nums[i], i});
        }
        ans.push_back(pq.top().first);
        for (int i = k; i < n; i++) {
            while (!pq.empty() && pq.top().second <= i - k) {
                pq.pop();
            }
            pq.push({nums[i], i});
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};


int main(){
  
  return 0;
}