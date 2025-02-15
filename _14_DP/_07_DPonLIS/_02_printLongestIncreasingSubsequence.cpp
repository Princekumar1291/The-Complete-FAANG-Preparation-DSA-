//Problem Link: https://www.geeksforgeeks.org/problems/printing-longest-increasing-subsequence/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=printing-longest-increasing-subsequence


class Solution {
  public:
      vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
          vector<int> dp(n, 1);
          vector<int> hash(n, 0);
          int maxLength = 1;
          int ind = 0;
  
          for (int i = 0; i < n; i++) {
              hash[i] = i;
              for (int prevInd = 0; prevInd < i; prevInd++) {
                  if (arr[prevInd] < arr[i] && dp[prevInd] + 1 > dp[i]) {
                      dp[i] = dp[prevInd] + 1;
                      hash[i] = prevInd;
                  }
              }
              if (dp[i] > maxLength) {
                  maxLength = dp[i];
                  ind = i;
              }
          }
  
          vector<int> ans;
          ans.push_back(arr[ind]);
          while (hash[ind] != ind) {
              ind = hash[ind];
              ans.push_back(arr[ind]);
          }
          reverse(ans.begin(), ans.end());
          return ans;
      }
  };