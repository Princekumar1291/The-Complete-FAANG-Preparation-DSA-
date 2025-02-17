// prblem Link: https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=partitions-with-given-difference





class Solution {
  public:
    int helper(vector<int>& arr,int n,int target,vector<vector<int>>& dp){
        if(target<0) return 0;
        if(n<0){
            if(target==0) return 1;
            else return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int take=helper(arr,n-1,target-arr[n],dp);
        int notTake=helper(arr,n-1,target,dp);
        return dp[n][target]=take+notTake;
    }
    int countPartitions(vector<int>& arr, int d) {
        int n=arr.size();
        int totSum=0;
        for(int ele:arr) totSum+=ele;
        int ans=0;
        int target=totSum+d;
        if(target%2==1) return 0;
        target/=2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,n-1,target,dp);
    }
};





class Solution {
  public:
    int md=int(1e9+7);
    int helper(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
        if(i==0){
            if(target==0 && arr[0]==0) return 2;
            else if(target==0 || target==arr[0]) return 1;
            return 0;
        }
        if(dp[i][target]!=-1) return dp[i][target];
        int notTake=helper(arr,target,i-1,dp);
        int take=0;
        if(target>=arr[i]) take=helper(arr,target-arr[i],i-1,dp);
        return dp[i][target]=(take+notTake)%md;
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sum=0;
        for(int ele:arr) sum+=ele;
        int target=sum-d;
        if(target<0 || target%2==1) return 0;
        target/=2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(arr,target,n-1,dp);
    }
};