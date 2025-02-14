//Problem Link: https://leetcode.com/problems/shortest-common-supersequence/




class Solution {
  public:
      string css(string s1,string s2){
          int n=s1.size();
          int m=s2.size();
          vector<vector<int>> dp(n+1,vector<int>(m+1,0)) ;
          for(int i=1;i<=n;i++){
              for(int j=1;j<=m;j++){
                  if(s1[i-1]==s2[j-1]){
                      dp[i][j]=1+dp[i-1][j-1];
                  }
                  else {
                      dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                  }
              }
          }
          string ans="";
          int i=n,j=m;
          while(i>0 && j>0){
              if(s1[i-1]==s2[j-1]) {
                  ans=s1[i-1]+ans;
                  i--;j--;
              }
              else if(dp[i-1][j]>dp[i][j-1]) {
                  ans=s1[i-1]+ans;
                  i--;
              }
              else {
                  ans=s2[j-1]+ans;
                  j--; 
              }
          }
          while(i>0) {
              ans=s1[i-1]+ans;
              i--;
          }
          while(j>0) {
              ans=s2[j-1]+ans;
              j--;
          }
          // reverse(ans.begin(),ans.end());
          return ans;
      }
      string shortestCommonSupersequence(string str1, string str2) {
          return css(str1,str2);
      }
  };