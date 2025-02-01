class Solution {
public:
    int helper(vector<int>& nums, int n, vector<int>& dp) {
        if (n == 0) return nums[0];
        if (n == 1) return max(nums[0], nums[1]);
        if (dp[n] != -1) return dp[n];
        
        int left = helper(nums, n - 2, dp) + nums[n];
        int right = helper(nums, n - 1, dp) + 0;
        
        return dp[n] = max(left, right);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        
        // Scenario 1: Rob the first house and exclude the last house
        vector<int> temp1(nums.begin(), nums.end() - 1);
        vector<int> dp1(temp1.size(), -1);
        int ans1 = helper(temp1, temp1.size() - 1, dp1);
        
        // Scenario 2: Exclude the first house and rob the last house
        vector<int> temp2(nums.begin() + 1, nums.end());
        vector<int> dp2(temp2.size(), -1);
        int ans2 = helper(temp2, temp2.size() - 1, dp2);
        
        return max(ans1, ans2);
    }
};