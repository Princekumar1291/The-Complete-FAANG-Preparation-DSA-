//Problem Link: https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=perfect-sum-problem






class Solution {
  public:
    int helper(vector<int>& arr,int n,int target,vector<vector<int>>& dp){
        if(target<0) return 0;
        if (n < 0) {
            if (target == 0) return 1;
            return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int left=helper(arr,n-1,target-arr[n],dp);
        int right=helper(arr,n-1,target,dp);
        return dp[n][target]=left+right;
    }
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,n-1,target,dp);
    }
};






#include <vector>
using namespace std;

class Solution {
public:
    int helper(int arr[], int i, int target, vector<vector<int>>& dp) {
        if (i == 0) {
            if (target == 0 && arr[0] == 0) return 2;
            if (target == 0 || target == arr[0]) return 1;
            return 0;
        }
        if (dp[i][target] != -1) return dp[i][target];
        int notTake = helper(arr, i - 1, target, dp);
        int take = 0;
        if (target >= arr[i]) take = helper(arr, i - 1, target - arr[i], dp);
        return dp[i][target] = (take + notTake)%1000000007;
    }

    int perfectSum(int arr[], int n, int target) {
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return helper(arr, n - 1, target, dp);
    }
};