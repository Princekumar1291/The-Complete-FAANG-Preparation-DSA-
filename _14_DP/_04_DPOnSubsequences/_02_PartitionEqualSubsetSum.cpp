//Problem Link: https://leetcode.com/problems/partition-equal-subset-sum/description/




class Solution {
public:
    bool helper(vector<int>& nums,int target,int i,vector<vector<int>>& dp){
        if(target==0) return true;
        if(i==0) return target==nums[0];
        if(dp[i][target]!=-1) return dp[i][target];
        bool notTake=helper(nums,target,i-1,dp);
        bool take=false;
        if(target>=nums[i]) take=helper(nums,target-nums[i],i-1,dp); 
        return dp[i][target]=notTake||take;
    } 
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int target=0;
        for(int ele:nums) target+=ele;
        if(target%2!=0) return false;
        target/=2;

        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        int i=n-1;
        return helper(nums,target,i,dp);
    }
};