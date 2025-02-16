//Problem Link: https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/


class Solution {
  public:
      int helper(int i,int j,vector<int>& cuts,vector<vector<int>>& dp){
          if(i>j) return 0;
          int mini=INT_MAX;
          if(dp[i][j]!=-1) return dp[i][j];
          for(int t=i;t<=j;t++){
              int cost=(cuts[j+1]-cuts[i-1])+helper(i,t-1,cuts,dp)+helper(t+1,j,cuts,dp);
              mini=min(cost,mini);
          }
          return dp[i][j]=mini;
      }
      int minCost(int n, vector<int>& cuts) {
          cuts.push_back(n);
          cuts.insert(cuts.begin(),0);
          sort(cuts.begin(),cuts.end());
          int m=cuts.size();
          vector<vector<int>> dp(m+2,vector<int>(m+2,-1));
          return helper(1,m-2,cuts,dp);
      }
  };