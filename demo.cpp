#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int helper(string& s1, string& s2, int i, int j, vector<vector<int>>& dp) {
    if (i < 0 || j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    
    int match = 0;
    if (s1[i] == s2[j]) {
        match = 1 + helper(s1, s2, i - 1, j - 1, dp);
    }
    
    int left = helper(s1, s2, i - 1, j, dp);
    int right = helper(s1, s2, i, j - 1, dp);
    
    return dp[i][j] = max(match, max(left, right));
}

string findLCS(int n, int m, string &s1, string &s2) {
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int ansLen = helper(s1, s2, n - 1, m - 1, dp);
    
    // Now, backtrack to find the one matching element in LCS
    string ans = "";
    int i = n - 1, j = m - 1;
    
    while (i >= 0 && j >= 0) {
        if (s1[i] == s2[j]) {
            ans = s1[i] + ans; // Append the matching character
            i--;
            j--;
        }
        else if (dp[i - 1][j] >= dp[i][j - 1]) {
            i--;
        }
        else {
            j--;
        }
    }
    
    return ans;
}

int main() {
    string s1 = "ABCBDAB";
    string s2 = "BDCAB";
    
    int n = s1.length();
    int m = s2.length();
    
    string lcs = findLCS(n, m, s1, s2);
    cout << "Longest Common Subsequence: " << lcs << endl;
    
    return 0;
}
