//Problem Link: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2




class Solution {
public:
    int helper(vector<int>& nums,int i,int next,vector<vector<int>>& dp){
        if(i==0){
            if(nums[0]<next) return 1;
            else return 0;
        }
        if(dp[i][next+10002]!=-1) return dp[i][next+10002];
        int notTake=0+helper(nums,i-1,next,dp);
        int take=0;
        if(nums[i]<next) take=1+helper(nums,i-1,nums[i],dp);
        return dp[i][next+10002]=max(take,notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(20006,-1));
        return helper(nums,n-1,10001,dp);
    }
};