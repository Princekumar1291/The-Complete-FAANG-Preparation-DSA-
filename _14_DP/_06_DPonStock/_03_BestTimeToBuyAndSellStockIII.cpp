//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/




class Solution {
public:
    int helper(vector<int>& prices,int i,int buy,int cap,vector<vector<vector<int>>>& dp){
        if(i==prices.size() || cap==2) return 0;
        int prof=0;
        if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
        if(buy){
            prof=max((-prices[i]+helper(prices,i+1,0,cap,dp)),(0+helper(prices,i+1,1,cap,dp)));
        }
        else {
            prof=max((prices[i]+helper(prices,i+1,1,cap+1,dp)),(0+helper(prices,i+1,0,cap,dp)));
        }
        return dp[i][buy][cap]=prof;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
        return helper(prices,0,1,0,dp);
    }
};