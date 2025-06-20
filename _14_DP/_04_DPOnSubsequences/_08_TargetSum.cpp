//Problem Link: https://leetcode.com/problems/target-sum/description/



class Solution {
public:
    int helper(vector<int>& nums,int target,int n,vector<vector<int>>& dp){
        if(target<0) return 0;
        if(n<0){
            if(target==0) return 1;
            else return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int take=helper(nums,target-nums[n],n-1,dp);
        int notTake=helper(nums,target,n-1,dp);
        return dp[n][target]=take+notTake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int ele:nums) sum+=ele;
        sum-=target;
        if(sum%2==1 || sum<0) return 0;
        sum/=2;
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return helper(nums,sum,n-1,dp);
    }
};