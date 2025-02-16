//Problme Lik: https://leetcode.com/problems/palindrome-partitioning-ii/



class Solution {
  public:
      bool isPalindrome(string& s, int i, int j) {
          while (i < j) {
              if (s[i] != s[j]) return false;
              i++;
              j--;
          }
          return true;
      }
  
      int helper(string& s, int n, int i, vector<int>& dp) {
          if (i == n) return 0;
          if (dp[i] != -1) return dp[i];
  
          int mini = INT_MAX;
          for (int t = i; t < n; t++) {
              if (isPalindrome(s, i, t)) {
                  int cost = 1 + helper(s, n, t + 1, dp);
                  mini = min(mini, cost);
              }
          }
          return dp[i] = mini;
      }
  
      int minCut(string s) {
          int n = s.size();
          vector<int> dp(n, -1);
          return helper(s, n, 0, dp) - 1;
      }
  };