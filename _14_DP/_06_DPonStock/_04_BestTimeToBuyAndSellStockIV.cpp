//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/




class Solution {
public:
    int helper(vector<int>& prices,int i,int k,int buy,vector<vector<vector<int>>>& dp){
        if(i==prices.size() || k==0) return 0;
        int prof=0;
        if(dp[i][k][buy]!=-1) return dp[i][k][buy];
        if(buy){
            prof=max((-prices[i]+helper(prices,i+1,k,0,dp)),(0+helper(prices,i+1,k,1,dp)));
        }
        else{
            prof=max((prices[i]+helper(prices,i+1,k-1,1,dp)),(0+helper(prices,i+1,k,0,dp)));
        }
        return dp[i][k][buy]=prof;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(k+1,vector<int>(2,-1)));
        return helper(prices,0,k,1,dp);
    }
};




class Solution {
    public:
        int helper(vector<int>& prices,int i,bool check,int c,vector<vector<vector<int>>>& dp,int k){
            if(c>k) return 0;
            if(i==prices.size()) return 0;
            if(dp[i][check][c]!=-1) return dp[i][check][c];
            if(check){
                int sell=prices[i]+helper(prices,i+1,!check,c,dp,k);
                int notSell=helper(prices,i+1,check,c,dp,k);
                return dp[i][check][c]=max(sell,notSell);
            }
            else{
                int buy=-prices[i]+helper(prices,i+1,!check,c+1,dp,k);
                int notBuy=helper(prices,i+1,check,c,dp,k);
                return dp[i][check][c]=max(buy,notBuy);
            }
        }
        int maxProfit(int k, vector<int>& prices) {
            int n=prices.size();
            vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(3,vector<int>(k+1,-1)));
            return helper(prices,0,0,0,dp,k);
        }
    };