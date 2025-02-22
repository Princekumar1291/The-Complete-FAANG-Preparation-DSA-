// https://leetcode.com/problems/jump-game-ii/description/


class Solution {
  public:
      int md = (int)1e4;
      int helper(vector<int>& nums, int i, int n, vector<int>& dp) {
          if (i >= n - 1) return 0;
          if (dp[i] != -1) return dp[i];
          int mini = md;
          for (int j = 1; j <= nums[i]; j++) {
              mini = min(mini, 1 + helper(nums, i + j, n, dp));
          }
          return dp[i]=mini;
      }
      int jump(vector<int>& nums) {
          int n = nums.size();
          vector<int> dp(n, -1);
          return helper(nums, 0, n, dp);
      }
  };