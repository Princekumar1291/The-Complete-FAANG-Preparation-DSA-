class Solution {
public:
    int helper(vector<vector<int>>& matrix, int n, int m, int j, vector<vector<int>>& dp) {
        if (j < 0 || j > m) return INT_MAX / 2; // Use a large value to prevent overflow
        if (n == 0) return matrix[0][j];
        if (dp[n][j] != INT_MIN) return dp[n][j];
        
        int b = matrix[n][j] + helper(matrix, n - 1, m, j, dp);
        int bl = matrix[n][j] + helper(matrix, n - 1, m, j - 1, dp);
        int br = matrix[n][j] + helper(matrix, n - 1, m, j + 1, dp);
        
        return dp[n][j] = min(b, min(bl, br));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MIN));
        int mini = INT_MAX;
        
        for (int j = 0; j < m; j++) {
            int ans = helper(matrix, n - 1, m-1, j, dp);
            mini = min(mini, ans);
        }
        
        return mini;
    }
};
