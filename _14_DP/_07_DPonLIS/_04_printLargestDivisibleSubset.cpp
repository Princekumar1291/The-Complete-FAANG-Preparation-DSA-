//Problem Link: https://leetcode.com/problems/largest-divisible-subset/


class Solution {
  public:
      vector<int> largestDivisibleSubset(vector<int>& nums) {
          int n=nums.size();
          sort(nums.begin(),nums.end());
          vector<int> dp(n+1,1);
          vector<int> hash(n+1,0);
          int ind=0;
          int maxi=1;;
          for(int i=0;i<n;i++){
              hash[i]=i;
              for(int pi=0;pi<i;pi++){
                  if(nums[i]%nums[pi]==0 && dp[pi]+1>dp[i]){
                      dp[i]=dp[pi]+1;
                      hash[i]=pi;
                  }
              }
              if(dp[i]>maxi){
                  maxi=dp[i];
                  ind=i;
              }
          }
          vector<int> ans;
          ans.push_back(nums[ind]);
          while (hash[ind] != ind) {
              ind = hash[ind];
              ans.push_back(nums[ind]);
          }
          return ans;
      }
  };