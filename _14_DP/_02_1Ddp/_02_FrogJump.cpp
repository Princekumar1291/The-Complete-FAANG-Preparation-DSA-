
//Problem Link: https://www.geeksforgeeks.org/problems/geek-jump/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geek-jump





class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        if(n==0) return 0;
        if(n==1) return 0;
        int left=minimumEnergy(height,n-1)+abs(height[n-1]-height[n-2]);
        int right=minimumEnergy(height,n-2)+abs(height[n-1]-height[n-3]);
        return min(left,right);
    }
};












//opt

//{ Driver Code Starts
  class Solution {
  public:
  int f(vector<int>& height, int n,vector<int>&dp){
      if(n==0) return 0;
      if(dp[n]!=-1) return dp[n];
      int fs=f(height,n-1,dp)+abs(height[n]-height[n-1]);
      int ss=INT_MAX;
      if(n>1){
          ss=f(height,n-2,dp)+abs(height[n]-height[n-2]);
      }
      return dp[n]=min(fs,ss);
  }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1,-1);
        return f(height,n-1,dp);
    }
};