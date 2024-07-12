#include<bits/stdc++.h>
using namespace std;
int larSquare(vector<vector<int>> mat,int n){
  int n=mat.size(); 
  int m=mat[0].size();
  int ans=0;
  vector<vector<int>> dp(n,vector<int>(m));
  for(int i=0;i<n;i++){ 
    for(int j=0;j<m;j++){ 
      if(j==0 || i==0) dp[i][j]=mat[i][j];
      if(mat[i][j]==0) dp[i][j]=0;
      else{
        dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
        ans=max(ans,dp[i][j]);
      }
    }
  }
  return ans;
}
int main(){
  
  return 0;
}