//Problem Link: https://leetcode.com/problems/target-sum/description/




class Solution {
public:
    int helper(vector<int>& nums,int target,int i,vector<vector<int>>& dp){
        if(i==0){
            if(target==0 && nums[0]==0) return 2;
            if(target==nums[0] || target==-nums[0]) return 1;
            return 0;
        }
        if(dp[i][target+2000]!=-1) return dp[i][target+2000];
        int add=helper(nums,target+nums[i],i-1,dp);
        int subt=helper(nums,target-nums[i],i-1,dp);
        return dp[i][target+2000]=add+subt;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(4002,-1));
        return helper(nums,target,n-1,dp);
    }
};






class Solution {
public:
    int helper(vector<int>& nums,int target,int n,vector<vector<int>>& dp){
        if(target<0) return 0;
        if(n<0){
            if(target==0) return 1;
            else return 0;
        }
        if(dp[n][target+10001]!=-1) return dp[n][target+10001];
        int take=helper(nums,target-nums[n],n-1,dp);
        int notTake=helper(nums,target,n-1,dp);
        return dp[n][target+10001]=take+notTake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        for(int ele:nums) sum+=ele;
        sum+=target;
        if(sum%2==1) return 0;
        sum/=2;
        vector<vector<int>> dp(n,vector<int>(20004,-1));
        return helper(nums,sum,n-1,dp);
    }
};