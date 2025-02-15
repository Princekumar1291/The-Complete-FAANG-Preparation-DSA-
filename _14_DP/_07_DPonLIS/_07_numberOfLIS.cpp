//problem Link: https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/

class Solution {
  public:
      int findNumberOfLIS(vector<int>& nums) {
          int n=nums.size();
          vector<int> dp(n,1);
          vector<int> c(n,1);
          for(int i=0;i<n;i++){
              for(int prev=0;prev<i;prev++){
                  if(nums[prev]<nums[i] && dp[prev]+1>dp[i]) {
                      dp[i]=dp[prev]+1;
                      c[i]=c[prev]; //inherit
                  }
                  else if(nums[prev]<nums[i] && dp[prev]+1==dp[i]){
                      c[i]=c[i]+c[prev]; //increase the count
                  }
              }
          }
          int maxi=*max_element(dp.begin(),dp.end());
          int ans=0;
          for(int i=0;i<n;i++){
              if(dp[i]==maxi) ans+=c[i];
          }
          return ans;
      }
  };