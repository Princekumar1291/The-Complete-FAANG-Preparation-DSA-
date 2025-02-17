//Problem Link: https://leetcode.com/problems/coin-change-ii/description/




class Solution {
public:
    int helper(vector<int>& coins,int target,int n,vector<vector<int>>& dp{
        if(target<0) return 0;
        if(n<0){
            if(target==0) return 1;
            else return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int take=helper(coins,target-coins[n],n,dp);
        int notTake=helper(coins,target,n-1,dp);
        return dp[n][target]=take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return helper(coins,amount,n-1,dp);
    }
};