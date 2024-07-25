//Problem Link: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1


class Solution{   
public:
    bool helper(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
        if(target==0) return true;
        if(i==0) return target==arr[0];
        if(dp[i][target]!=-1) return dp[i][target];
        bool notTake=helper(arr,target,i-1,dp);
        bool take=false;
        if(arr[i]<=target) take=helper(arr,target-arr[i],i-1,dp);
        return dp[i][target]=notTake||take;
    }
    bool isSubsetSum(vector<int>arr, int target){
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,target,n-1,dp);
    }
};