//Problem Link: https://leetcode.com/problems/sum-of-subarray-ranges/description/

#include<bits/stdc++.h>
using namespace std;

long long subArrayRanges(vector<int>& nums) {
  long long sum=0;
  int n=nums.size();
  for(int i=0;i<n;i++){
      int lar=nums[i];
      int sml=nums[i];
      for(int j=i;j<n;j++){
          lar=max(lar,nums[j]);
          sml=min(sml,nums[j]);
          sum=sum+(lar-sml);
      }
  }
  return sum;
}


int main(){
  
  return 0;
}