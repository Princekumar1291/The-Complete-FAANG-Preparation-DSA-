// Problem Link: https://leetcode.com/problems/max-consecutive-ones-iii/description/

#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
  int n=nums.size();
  int ans=0;
  int i=0,j=0;
  int sum=0;
  int t=k;
  while(i<n){
      if(nums[i]==1){
          sum++;
      }
      else if(k>0){
          sum++;
          k--;
      }
      else {
          ans=max(ans,sum);
          while(nums[j]==1){
              sum--;
              j++;
          }
          j++;
      }
      i++;
  }ans=max(ans,sum);
  
  cout<<ans;
  return ans;
}


int main(){
  
  return 0;
}