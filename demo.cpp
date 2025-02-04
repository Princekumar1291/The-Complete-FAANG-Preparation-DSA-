#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonSubstr(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        int maxLength = 0, endIndex = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if (dp[i][j] > maxLength) {
                        maxLength = dp[i][j];
                        endIndex = i; // Store end index of LCS in s1
                    }
                }
            }
        }
        
        // Extract substring from s1
        if (maxLength == 0) return "";
        return s1.substr(endIndex - maxLength, maxLength);
    }
};

int main() {
    Solution sol;
    string s1 = "abcde";
    string s2 = "abfde";
    cout << "Longest Common Substring: " << sol.longestCommonSubstr(s1, s2) << endl;
    return 0;
}
