//Problem Link: https://www.geeksforgeeks.org/problems/longest-common-substring1452/1







class Solution {
  public:
    int longestCommonSubstr(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else dp[i][j]=0;
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                ans=max(dp[i][j],ans);
            }
        }
        return ans;
    }
};






#include <string>
#include <algorithm>
#include <vector>

class Solution { 
public:
    int longestCommonSubstrHelper(const string &s1, const string &s2, int i, int j, int count) {
        if (i < 0 || j < 0) {
            return count;
        }
        
        if (s1[i] == s2[j]) {
            count = longestCommonSubstrHelper(s1, s2, i - 1, j - 1, count + 1);
        }
        
        int count1 = longestCommonSubstrHelper(s1, s2, i - 1, j, 0);
        int count2 = longestCommonSubstrHelper(s1, s2, i, j - 1, 0);
        
        return max(count, max(count1, count2));
    }
    
    int longestCommonSubstr(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        return longestCommonSubstrHelper(s1, s2, n - 1, m - 1, 0);
    }
};
