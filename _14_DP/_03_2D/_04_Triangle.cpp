//Problem Link:https://leetcode.com/problems/triangle/


class Solution {
public:
    int helper(vector<vector<int>>& triangle,int i,int j,int& n,vector<vector<int>>& dp){
        if(i==n) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int r=triangle[i][j]+helper(triangle,i+1,j,n,dp);
        int d=triangle[i][j]+helper(triangle,i+1,j+1,n,dp);
        return dp[i][j]=min(d,r);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        for(auto arr:triangle){
            dp.push_back(vector<int>(arr.size(),-1));
        }
        int n=triangle.size()-1;
        return helper(triangle,0,0,n,dp);
    }
};

