//Problem Link: https://leetcode.com/problems/house-robber/



class Solution {
public:
    int helper(vector<int>& nums,int n,vector<int>& dp){
        if(n==0) return nums[0];
        if(n==1) return max(nums[0],nums[1]);
        if(dp[n]!=-1) return dp[n];
        int left=helper(nums,n-2,dp)+nums[n];
        int right=helper(nums,n-1,dp)+0;
        return dp[n]=max(left,right);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return helper(nums,n-1,dp);
    }
};

int rob(vector<int>& nums) {
    int n=nums.size();
    if(n==1) return nums[0];
    vector<int> dp(n,-1);
    dp[0]=nums[0];
    dp[1]=max(nums[0],nums[1]);
    for(int i=2;i<n;i++){
        int left=dp[i-2]+nums[i];
        int right=dp[i-1]+0;
        dp[i]=max(left,right);
    }
    return dp[n-1];        
}















//DP
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int left=nums[i];
            if(i-2>=0) left+=dp[i-2];
            int right=dp[i-1];
            dp[i]=max(left,right);
        }
        return dp[n-1];
    }
};