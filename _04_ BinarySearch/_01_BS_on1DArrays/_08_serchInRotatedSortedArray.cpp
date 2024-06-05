#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {
  int n=nums.size();
  int ans=false;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]==target) return true;
      else if(nums[low]== nums[mid] && nums[mid]== nums[high] ) low++,high--;
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
  vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
  int target = 0;
  bool result = search(nums, target);
  cout << (result ? "true" : "false") << endl;
  return 0;
}