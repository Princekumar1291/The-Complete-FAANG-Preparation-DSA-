//Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/





class Solution {
public:
    int helper(vector<int>& arr,int i,int check,vector<vector<int>>& dp){
        if(i==arr.size()) return 0;
        if(dp[i][check]!=-1) return dp[i][check];
        if(check==1) return dp[i][check]=max((-arr[i]+helper(arr,i+1,0,dp)),helper(arr,i+1,1,dp));
        else return dp[i][check]=max((arr[i]+helper(arr,i+1,1,dp)),helper(arr,i+1,0,dp));
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return helper(prices,0,1,dp);
    }
};




class Solution {
    public:
        int helper(vector<int>& prices,bool check,int i,vector<vector<int>>& dp){
            if(i==prices.size()){
                return 0;
            } 
            if(dp[i][check]!=-1) return dp[i][check];
            if(check){
                int sell=prices[i]+helper(prices,!check,i+1,dp);
                int notSell=helper(prices,check,i+1,dp);
                return dp[i][check]=max(sell,notSell);
            }
            else{
                int buy=-prices[i]+helper(prices,!check,i+1,dp);
                int notBuy=helper(prices,check,i+1,dp);
                return dp[i][check]=max(buy,notBuy);
            }
        }
        int maxProfit(vector<int>& prices) {
            vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
            return helper(prices,0,0,dp);
        }
    };