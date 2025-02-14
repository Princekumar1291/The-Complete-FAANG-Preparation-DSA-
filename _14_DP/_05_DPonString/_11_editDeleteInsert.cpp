//Problem Link: https://leetcode.com/problems/edit-distance/



class Solution {
  public:
      int editDistRec(string& s1, string& s2, int m, int n,vector<vector<int>>&dp) {    
          if (m < 0) return n + 1;    
          if (n < 0) return m + 1;   
          if(dp[m][n]!=-1) return dp[m][n]; 
          if (s1[m] == s2[n]) return dp[m][n]=editDistRec(s1, s2, m - 1, n - 1,dp);    
          int insert=1+editDistRec(s1, s2, m, n - 1,dp);
          int del=1+editDistRec(s1, s2, m - 1, n,dp);
          int replace=1+editDistRec(s1, s2, m - 1, n - 1,dp);  
          return dp[m][n]=min({insert,del,replace});
      } 
      int minDistance(string s1, string s2) {
          int m=s1.size();
          int n=s2.size();
          vector<vector<int>> dp(m,vector<int>(n,-1));
          return editDistRec(s1, s2, m-1,n-1,dp);
      }
  };
  