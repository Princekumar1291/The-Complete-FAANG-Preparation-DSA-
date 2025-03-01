// https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/?envType=daily-question&envId=2025-02-27



// brute force
class Solution {
  public:
      int helper(vector<int>& arr,int pprev,int prev,int i,int n){
          if(i==n) return 0;
          return pprev+prev==arr[i] ? 1+helper(arr,prev,arr[i],i+1,n) : helper(arr,pprev,prev,i+1,n);
      }
      int lenLongestFibSubseq(vector<int>& arr) {
          int n=arr.size();
          int ans=0;
          for(int i=0;i<n-2;i++){
              for(int j=i+1;j<n;j++){
                  int temp=helper(arr,arr[i],arr[j],j+1,n);
                  if(temp>0) ans=max(ans,temp+2);
              }
          }
          return ans;
      }
  };




  //better (memory issues)
  class Solution {
    public:
        int helper(vector<int>& arr,int pprev,int prev,int i,int n,vector<vector<vector<int>>>& dp){
            if(i==n) return 0;
            if(dp[i][pprev][prev]!=-1) return dp[i][pprev][prev];
            return dp[i][pprev][prev]=arr[pprev]+arr[prev]==arr[i] ? 1+helper(arr,prev,i,i+1,n,dp) : helper(arr,pprev,prev,i+1,n,dp);
        }
        int lenLongestFibSubseq(vector<int>& arr) {
            int n=arr.size();
            vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(n,-1)));
            int ans=0;
            for(int i=0;i<n-2;i++){
                for(int j=i+1;j<n;j++){
                    int temp=helper(arr,i,j,i+2,n,dp);
                    ans=max(ans,temp+2);
                }
            }
            return ans>=3 ? ans : 0;
        }
    };
    

//best

class Solution {
  public:
      int helper(vector<int>& arr,int pprev,int prev,int n,vector<vector<int>>& dp,unordered_map<int,int>& mp){
          if(pprev>=n || prev>=n) return 0;
          if(dp[pprev][prev]!=-1) return dp[pprev][prev];
          int ans=0;
          if(mp.find(arr[pprev]+arr[prev])!=mp.end()){
              int next=mp[arr[pprev]+arr[prev]];
              ans=1+helper(arr,prev,next,n,dp,mp);
          }
          return dp[pprev][prev]=ans;
      }
      int lenLongestFibSubseq(vector<int>& arr) {
          int n=arr.size();
          unordered_map<int,int> mp;
          for(int i=0;i<n;i++) mp[arr[i]]=i;
          vector<vector<int>> dp(n,vector<int>(n,-1));
          int ans=0;
          for(int i=0;i<n-2;i++){
              for(int j=i+1;j<n;j++){
                  int temp=helper(arr,i,j,n,dp,mp);
                  ans=max(ans,temp+2);
              }
          }
          return ans>=3 ? ans : 0;
      }
  };
  