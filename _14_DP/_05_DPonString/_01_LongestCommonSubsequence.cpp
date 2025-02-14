//Problem Link: https://leetcode.com/problems/longest-common-subsequence/description/




class Solution {
public:
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
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        vector<vector<int>> dp(n1, vector<int>(n2, -1));
        return helper(text1, text2, n1 - 1, n2 - 1, dp);
    }
};




class Solution {
public:
    int helper(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]=1+helper(s1,s2,i-1,j-1,dp);
        return dp[i][j]=max(helper(s1,s2,i-1,j,dp),helper(s1,s2,i,j-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return helper(text1,text2,n1-1,n2-1,dp);
    }
};




class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};