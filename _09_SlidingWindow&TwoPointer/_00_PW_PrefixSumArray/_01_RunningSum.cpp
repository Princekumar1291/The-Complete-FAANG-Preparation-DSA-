//Problem Link: https://leetcode.com/problems/running-sum-of-1d-array/submissions/1301484465/

#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
  int n=nums.size();
  vector<int> ans;
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=nums[i];
      ans.push_back(sum);
  }
  return ans;
}


int main(){
  
  return 0;
}