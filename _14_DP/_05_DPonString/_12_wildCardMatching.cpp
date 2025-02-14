//Problem Link: https://leetcode.com/problems/wildcard-matching/



class Solution {
  public:
      bool helper(string& s, string& p, int i, int j,vector<vector<int>>& dp) {
          if (i < 0 && j < 0) return true;  
          if (j < 0) return false;  
          if (i < 0) {
              for (int t = 0; t <= j; t++) {
                  if (p[t] != '*') return false;  
              }
              return true;
          }
          if(dp[i][j]!=-1) return dp[i][j];
          if (s[i] == p[j] || p[j] == '?') return dp[i][j]=helper(s, p, i - 1, j - 1,dp);  
          if (p[j] == '*') return dp[i][j]=helper(s, p, i - 1, j,dp) || helper(s, p, i, j - 1,dp);  
          return dp[i][j]=false;
      }
  
      bool isMatch(string s, string p) {
          int n=s.size();
          int m=p.size();
          vector<vector<int>> dp(n,vector<int>(m,-1));
          return helper(s, p, n-1, m-1,dp);
      }
  };
  