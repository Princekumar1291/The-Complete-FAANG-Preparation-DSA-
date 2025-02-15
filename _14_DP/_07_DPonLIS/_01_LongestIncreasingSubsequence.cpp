//Problem Link: https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2




class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        for(int i=0;i<n;i++){
            for(int prev=0;prev<i;prev++){
                if(nums[prev]<nums[i]) dp[i]=max(dp[prev]+1,dp[i]);
            }
        }
        int ans=*max_element(dp.begin(),dp.end());
        return ans;
    }
};




class Solution {
    public:
        int helper(vector<int>& nums,int i,int prevInd,vector<vector<int>>& dp){
            if(i==nums.size()) return 0;
            if(prevInd!=-1 && dp[i][prevInd]!=-1) return dp[i][prevInd];
            int take=(prevInd==-1 || nums[prevInd] < nums[i]) ? 1+helper(nums,i+1,i,dp) : 0;
            int notTake=helper(nums,i+1,prevInd,dp);
            if(prevInd!=-1) return dp[i][prevInd]=max(take,notTake);
            else return max(take,notTake);
        }
        int lengthOfLIS(vector<int>& nums) {
            int n=nums.size();
            vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
            int prevInd=-1;
            return helper(nums,0,prevInd,dp);
        }
    };