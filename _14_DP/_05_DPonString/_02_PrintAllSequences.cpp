//Probelm Link: https://www.geeksforgeeks.org/problems/print-all-lcs-sequences3413/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-all-lcs-sequences




class Solution { 
  public:
    void findAllLCS(string &s, string &t, int i, int j, vector<vector<int>> &dp, string str, set<string> &st) {
        while (i > 0 && j > 0) {
            if (s[i - 1] == t[j - 1]) {
                str = s[i - 1] + str;
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else if (dp[i - 1][j] < dp[i][j - 1]) {
                j--;
            } else {
                findAllLCS(s, t, i - 1, j, dp, str, st);
                findAllLCS(s, t, i, j - 1, dp, str, st);
                return;
            }
        }

        // When either i or j is zero, str is a valid LCS
        if (!str.empty()) st.insert(str);
    }
    vector<string> all_longest_common_subsequences(string s, string t) {
        // Code here
        int n=s.size();
        int m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        string str="";
        set<string> st;
        findAllLCS(s,t,n,m,dp,str,st);
        
        
        vector<string> ans(st.begin(),st.end());
        return ans;
    }
};
