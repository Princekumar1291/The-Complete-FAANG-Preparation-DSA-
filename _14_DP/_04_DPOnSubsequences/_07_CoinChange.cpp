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



class Solution {
public:
    int md=(int)1e5;
    int helper(vector<int>& coins,int amounts,int n,vector<vector<int>>& dp){
        if(amounts<0) return md;
        if(n<0){
            if(amounts==0) return 0;
            else return md;
        }
        if(dp[n][amounts]!=-1) return dp[n][amounts];
        int take=1+helper(coins,amounts-coins[n],n,dp);
        int notTake=0+helper(coins,amounts,n-1,dp);
        return dp[n][amounts]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=helper(coins,amount,n-1,dp);
        if(ans<=amount) return ans;
        return -1;
    }
};