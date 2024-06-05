#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int n=nums.size();
  int ans=n;
  int low=0;
  int high=n-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(nums[mid]<target) low=mid+1;
      else{
          ans=mid;
          high=mid-1;
      }
  }
  return ans;
}

int main(){
  vector<int> v={1,3,5,6};
  int target = 5;
  int ans=searchInsert(v,target);
  cout<<ans;
  return 0;
}