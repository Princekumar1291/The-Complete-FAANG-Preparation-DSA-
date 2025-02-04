//Problem Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/




class Solution {
public:
    int helper(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int match=0;
        if(s1[i]==s2[j]) match=1+helper(s1,s2,i-1,j-1,dp);
        int left=helper(s1,s2,i-1,j,dp);
        int right=helper(s1,s2,i,j-1,dp);
        return dp[i][j]=max(match,max(left,right));
    }
    int minInsertions(string s) {
        int n=s.size();
        string s1=s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return n-helper(s1,s2,n-1,n-1,dp);
    }
};