



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonSubstr(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        int maxLength = 0, endIndex = -1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if (dp[i][j] > maxLength) {
                        maxLength = dp[i][j];
                        endIndex = i - 1;  // Store the ending index in s1
                    }
                }
            }
        }

        // Extract the longest common substring
        string longestSubstring;
        if (endIndex != -1) {
            longestSubstring = s1.substr(endIndex - maxLength + 1, maxLength);
        } else {
            longestSubstring = "";
        }

        cout << "Longest Common Substring: " << longestSubstring << endl;
        cout << "Length: " << maxLength << endl;
        
        return longestSubstring;
    }
};

int main() {
    Solution sol;
    string s1 = "abcde";
    string s2 = "abfce";
    sol.longestCommonSubstr(s1, s2);
    return 0;
}
