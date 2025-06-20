//Problem Link: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

class Solution {
  public:
    bool helper(vector<int>& arr,int n,int target,vector<vector<int>>& dp){
        if(target==0) return true;
        if(n<0 || target<0) return false;
        if(dp[n][target]!=-1) return dp[n][target];
        bool take=helper(arr,n-1,target-arr[n],dp);
        bool notTake=helper(arr,n-1,target,dp);
        return dp[n][target]=take||notTake;
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,n-1,target,dp);
    }
};


class Solution {
  public:
    bool helper(vector<int>& arr,int n,int target,vector<vector<int>>& dp){
        if(target<0) return false;
        if (n < 0) {
            if(target==0) return 1;
            return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        bool left=helper(arr,n-1,target-arr[n],dp);
        bool right=helper(arr,n-1,target,dp);
        return dp[n][target]=left||right;
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,n-1,target,dp);
    }
};