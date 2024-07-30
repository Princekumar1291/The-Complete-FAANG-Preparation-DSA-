//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/





class Solution {
public:
    int helper(vector<int>& prices,int i,int buy,vector<vector<int>>& dp){
        if(i>=prices.size()) return 0;
        int prof=0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            prof=max((-prices[i]+helper(prices,i+1,0,dp)),(0+helper(prices,i+1,1,dp)));
        }
        else{
            prof=max((prices[i]+helper(prices,i+2,1,dp)),(0+helper(prices,i+1,0,dp)));
        }
        return dp[i][buy]=prof;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return helper(prices,0,1,dp);
    }
};