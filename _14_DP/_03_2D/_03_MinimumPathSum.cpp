//Problem Link: https://leetcode.com/problems/minimum-path-sum/description/


class Solution {
public:
    int ans=INT_MAX;
    int helper(vector<vector<int>>& grid,int n,int m,vector<vector<int>>& dp){
        if(n==0 && m==0) return grid[0][0];
        else if(n<0 || m<0) return INT_MAX;
        if(dp[n][m]!=-1) return dp[n][m];
        int l=INT_MAX;
        if(n>0) l=grid[n][m] + helper(grid,n-1,m,dp);
        int r=INT_MAX;
        if(m>0) r=grid[n][m] + helper(grid,n,m-1,dp);
        return dp[n][m]=min(l,r);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(grid,n-1,m-1,dp);
    }
};