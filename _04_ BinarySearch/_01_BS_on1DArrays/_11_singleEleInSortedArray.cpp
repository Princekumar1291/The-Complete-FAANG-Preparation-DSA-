//Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/1271336460/


#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
  int n=nums.size();
  if(n==1) return nums[0];
  if(nums[0]!=nums[1]) return nums[0];
  if(nums[n-1]!=nums[n-2]) return nums[n-1];
  int low=1;
  int high=n-2;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
      else if(mid%2==1 && nums[mid]==nums[mid-1]) low=mid+1; 
      else if(mid%2==1 && nums[mid]==nums[mid+1]) high=mid-1; 
      else if(mid%2==0 && nums[mid]==nums[mid-1]) high=mid-1; 
      else if(mid%2==0 && nums[mid]==nums[mid+1]) low=mid+1;
  }
  return -1;
}

int main(){
  
  return 0;
}