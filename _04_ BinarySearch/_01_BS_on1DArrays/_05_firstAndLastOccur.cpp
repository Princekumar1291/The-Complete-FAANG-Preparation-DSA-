//Problem Linl: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/


#include<bits/stdc++.h>
using namespace std;

int solve(int n, int key, vector < int > & v) {
  int res = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] == key) {
      res = i;
      break;
    }
  }
  return res;
}

vector<int> searchRange(vector<int>& nums, int target) {
  int n=nums.size();
  int first=-1;
  int last=-1;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]==target) {
          first=mid;
          high=mid-1;
      }
      else if(nums[mid]>target) high=mid-1;
      else if(nums[mid]<target) low=mid+1;
  }
  low=0;
  high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]==target) {
          last=mid;
          low=mid+1;
      }
      else if(nums[mid]>target) high=mid-1;
      else if(nums[mid]<target) low=mid+1;
  }
  return {first,last};
}


vector<int> searchRange(vector<int>& nums, int target) {
  int fl=lower_bound(nums.begin(),nums.end(),target)-nums.begin(); // Find first position
  int cl=upper_bound(nums.begin(),nums.end(),target)-nums.begin(); // Find position after last
  if(fl==cl) return {-1,-1};
  return {fl,cl-1};
}


int main() {
  int n = 7;
  int key = 13;
  vector < int > v = {3,4,13,13,13,20,40};
  cout << solve(n, key, v) << "\n";
  return 0;
} 