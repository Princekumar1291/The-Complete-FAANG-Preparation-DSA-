#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
  int n=nums.size();
  int ans=-1;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]==target) return mid;
      else if(nums[low]<=nums[mid]){
          if(target<=nums[mid] && target>=nums[low]){
              high=mid-1;
          }
          else low=mid+1;
      }
      else{
          if(target>=nums[mid] && target<=nums[high]){
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
  }
  return ans;
}

int main() {
    // Test case
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << "Index of target element: " << search(nums, target) << endl;
    return 0;
}