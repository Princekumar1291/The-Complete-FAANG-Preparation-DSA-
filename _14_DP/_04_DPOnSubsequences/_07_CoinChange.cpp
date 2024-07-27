//Problem Link: https://leetcode.com/problems/coin-change/description/




class Solution {
public:
    int md=(int)1e5;
    int helper(vector<int>& arr,int amount,int i,vector<vector<int>>& dp){
        if(i==0){
            if(amount%arr[0]==0) return amount/arr[0];
            else return md;
        }
        if(dp[i][amount]!=-1) return dp[i][amount];
        int notTake=0+helper(arr,amount,i-1,dp);
        int take=md;
        if(amount>=arr[i]) take=1+helper(arr,amount-arr[i],i,dp);
        return dp[i][amount]=min(take,notTake);
    }
    int coinChange(vector<int>& arr, int amount) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(md,-1));
        int count=helper(arr,amount,n-1,dp);
        if(count>=md) return -1;
        return count;
    }
};