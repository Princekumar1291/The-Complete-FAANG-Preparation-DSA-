// https://leetcode.com/problems/house-robber-iii/


class Solution {
  public:
  pair<int, int> helper(TreeNode* root) {
      if (root == nullptr) return {0, 0};
      auto left = helper(root->left);
      auto right = helper(root->right);
      int rob = root->val + left.second + right.second;
      int notRob = max(left.first, left.second) + max(right.first, right.second);
      return {rob, notRob};
  }
  int rob(TreeNode* root) {
      auto result = helper(root);
      return max(result.first, result.second);
  }
};