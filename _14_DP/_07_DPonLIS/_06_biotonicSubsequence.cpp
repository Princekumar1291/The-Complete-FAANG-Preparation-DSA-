//Problem Link: https://www.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1


class Solution {
  public:
    int LongestBitonicSequence(int n, vector<int> &nums) {
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int pi=0;pi<i;pi++){
                if(nums[pi]<nums[i] && dp[pi]+1>dp[i]){
                    dp[i]=dp[pi]+1;
                }
            }
        }
        vector<int>dp1(n,1);
        for(int i=n-1;i>=0;i--){
            for(int pi=n-1;pi>i;pi--){
                if(nums[pi]<nums[i] && dp1[pi]+1>dp1[i]){
                    dp1[i]=dp1[pi]+1;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
           if (dp[i] > 1 && dp1[i] > 1) ans=max(ans,dp[i]+dp1[i]-1);
        }
        return ans;
    }
};