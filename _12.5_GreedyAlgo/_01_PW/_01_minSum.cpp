//Problem Link: https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/description/


#include<bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int ele:nums)pq.push(ele);
  for(int i=0;i<k;i++){
      int t=pq.top();pq.pop();
      pq.push(-t);
  }     
  int sum=0;
  while(!pq.empty()){
      sum+=pq.top();
      pq.pop();
  }
  return sum;
}
int main(){
  vector<int> nums={4,2,3};
  int k=1;
  cout<<largestSumAfterKNegations(nums,k);
  return 0;
}