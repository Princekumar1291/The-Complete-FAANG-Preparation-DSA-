// https://leetcode.com/problems/valid-parenthesis-string/description/

class Solution {
  public:
      bool helper(string &s,int i,int c,vector<vector<int>>& dp){
          if(c<0) return false;
          if(i==s.size()) return c==0;
          if(dp[i][c]!=-1) return dp[i][c];
          if(s[i]=='(') return dp[i][c]=helper(s,i+1,c+1,dp);
          if(s[i]==')') return dp[i][c]=helper(s,i+1,c-1,dp);
          return dp[i][c]=helper(s,i+1,c+1,dp) || helper(s,i+1,c-1,dp) || helper(s,i+1,c,dp);
      }
      bool checkValidString(string s) {
          int n=s.size();
          vector<vector<int>> dp(n,vector<int>(n,-1));
          return helper(s,0,0,dp);
      }
  };



  