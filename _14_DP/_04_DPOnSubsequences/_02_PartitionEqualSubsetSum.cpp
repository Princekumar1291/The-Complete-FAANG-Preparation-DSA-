//Problem Link: https://leetcode.com/problems/partition-equal-subset-sum/description/




class Solution {
public:
    bool helper(vector<int>& nums, int target, int n, vector<vector<int>>& dp) {
        if(target<0) return false;
        if(n<0){
            if(target==0) return 1;
            else return 0;
        }
        if (dp[n][target] != -1) return dp[n][target];
        bool include = helper(nums, target - nums[n], n - 1, dp);
        bool exclude = helper(nums, target, n - 1, dp);
        return dp[n][target] = include || exclude;
    }

    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) totalSum += num;
        if (totalSum % 2 != 0) return false;
        int target = totalSum / 2;
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        return helper(nums, target, n - 1, dp);
    }
};