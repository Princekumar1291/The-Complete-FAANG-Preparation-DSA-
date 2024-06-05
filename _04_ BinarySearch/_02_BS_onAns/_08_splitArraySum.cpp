#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> nums,int target){
  int n=nums.size();
  int ans=0;
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=nums[i];
      if(sum==target){
          ans++;
          sum=0;
      }
      else if(sum>target){
          ans++;
          sum=nums[i];
      }
  }
  if(sum!=0) ans++;
  return ans;
}
int splitArray(vector<int>& nums, int k) {
  int low=*max_element(nums.begin(),nums.end());
  int high=accumulate(nums.begin(),nums.end(),0);
  int sum=0;
  int ans=low;
  while(low<=high){
      int mid=low+(high-low)/2;
      int temp=helper(nums,mid);
      if(temp>k) low=mid+1;
      else {
          ans=mid;
          high=mid-1;
      }
  }
  return ans;
}

int main(){
  
  return 0;
}