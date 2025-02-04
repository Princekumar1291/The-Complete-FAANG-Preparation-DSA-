// Problem Link: https://leetcode.com/problems/delete-operation-for-two-strings/



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
    int minDistance(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int ans=helper(s1,s2,n-1,m-1,dp);
        ans=m+n-(2*ans);
        return ans;
    }
};