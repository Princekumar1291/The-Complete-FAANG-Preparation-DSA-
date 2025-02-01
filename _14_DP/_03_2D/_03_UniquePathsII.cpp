//Problem Link: https://leetcode.com/problems/unique-paths-ii/description/



class Solution {
public:
    int helper(int i,int j,vector<vector<int>>& obst,vector<vector<int>>& dp){
        if(i>=0 && j>=0 && obst[i][j]==1) return 0;
        if(i==0 && j==0) return 1;
        else if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=helper(i-1,j,obst,dp);
        int left=helper(i,j-1,obst,dp);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i=obstacleGrid.size();
        int j=obstacleGrid[0].size();
        vector<vector<int>> dp(i,vector<int>(j,-1));
        return helper(i-1,j-1,obstacleGrid,dp);
    }
};





class Solution {
public:
    int helper(int m,int n,vector<vector<int>>& dp){
        if(m==0 && n==0) {
            if(dp[0][0]==0) return 0;
            else return 1;
        }
        if(n<0 || m<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int top=helper(m-1,n,dp);
        int left=helper(m,n-1,dp);
        return dp[m][n]=top+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int m=obs.size();
        int n=obs[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(obs[i][j]==1) dp[i][j]=0;
        return helper(m-1,n-1,dp);
    }
};










class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) dp[i][j]=0;
                else if(i==0 && j==0) dp[i][j]=1;
                else{
                    int l=0;
                    if(j>0) l=dp[i][j-1];
                    int u=0;
                    if(i>0) u=dp[i-1][j];
                    dp[i][j]=l+u;
                }
            }
        }
        return dp[m-1][n-1];
    }
};