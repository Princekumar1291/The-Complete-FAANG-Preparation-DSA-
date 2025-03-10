//Problem Link: https://leetcode.com/problems/distinct-subsequences/


class Solution {
  public:
      int helper(string s,string t,int i,int j,vector<vector<int>>& dp){
          if(j<0) return 1;
          if(i<0) return 0;
          if(dp[i][j]!=-1) return dp[i][j];
          if(s[i]==t[j]){
              return dp[i][j]=helper(s,t,i-1,j-1,dp) + helper(s,t,i-1,j,dp);
          }
          else return dp[i][j]=helper(s,t,i-1,j,dp);
      }
      int numDistinct(string s, string t) {
          int i=s.size();
          int j=t.size();
          vector<vector<int>> dp(i,vector<int>(j,-1));
          return helper(s,t,i-1,j-1,dp);
      }
  };




class Solution {
  public:
      int helper(string &s, string &t, int i, int j, vector<vector<int>> &dp) {
          if (j < 0) return 1;
          if (i < 0) return 0;
          if (dp[i][j] != -1) return dp[i][j];
  
          int result = 0;
  
          if (s[i] == t[j]) {
              int match = helper(s, t, i - 1, j - 1, dp);
              int skip = helper(s, t, i - 1, j, dp);
              result = match + skip;
          } else {
              result = helper(s, t, i - 1, j, dp);
          }
  
          return dp[i][j] = result;
      }
  
      int numDistinct(string s, string t) {
          int m = s.size();
          int n = t.size();
          vector<vector<int>> dp(m, vector<int>(n, -1));
          return helper(s, t, m - 1, n - 1, dp);
      }
  };