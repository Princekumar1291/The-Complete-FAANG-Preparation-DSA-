//Problem Link: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1


// class Solution{   
// public:
//     bool helper(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
//         if(target==0) return true;
//         if(i==0) return target==arr[0];
//         if(dp[i][target]!=-1) return dp[i][target];
//         bool notTake=helper(arr,target,i-1,dp);
//         bool take=false;
//         if(arr[i]<=target) take=helper(arr,target-arr[i],i-1,dp);
//         return dp[i][target]=notTake||take;
//     }
//     bool isSubsetSum(vector<int>arr, int target){
//         int n=arr.size();
//         vector<vector<int>> dp(n,vector<int>(target+1,-1));
//         return helper(arr,target,n-1,dp);
//     }
// };


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