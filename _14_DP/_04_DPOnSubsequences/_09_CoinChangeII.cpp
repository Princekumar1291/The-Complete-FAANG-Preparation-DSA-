//Problem Link: https://leetcode.com/problems/coin-change-ii/description/




class Solution {
public:
    int helper(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
        if(i==0){
            // if(target==0 && arr[0]==0) return 2;
            if(target%arr[0]==0) return 1;
            else return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int notTake=helper(arr,target,i-1,dp);
        int take=0;
        if(target>=arr[i]) take=helper(arr,target-arr[i],i,dp);
        return dp[i][target]=take+notTake;
    }
    int change(int amount, vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return helper(arr,amount,n-1,dp);
    }
};