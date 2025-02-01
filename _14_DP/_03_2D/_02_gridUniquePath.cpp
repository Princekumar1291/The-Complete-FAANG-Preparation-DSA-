//1) express on term of index (i,j)
//2) Explore and do all stuff
//3) sum of all ways/min/max of all stuff

class Solution {
public:
    int helper(int m,int n,vector<vector<int>>& dp){
        if(m==0 && n==0) return 1;
        else if(m<0 || n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int l=helper(m,n-1,dp);
        int r=helper(m-1,n,dp);
        return dp[m][n]=l+r;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,dp);
    }
};





//tabulation 
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp [m] [n];   
        for (int i=0; i<m; i++){
            for (int j=0 ;j<n ;j++){
                if ( i==0 || j==0 ) dp[i][j]=1;
                else{                    
                    int l=0;
                    if(i>0) l=dp [i-1] [j];
                    int u=0;
                    if(j>0) u=dp [i] [j-1];                       
                    dp [i] [j] =l+u;
                    }
                }
            }
        return dp [ m-1 ] [ n-1 ] ;
    }
};














int fact(int n,int r){
    double sum=1;
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return (int)sum;
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        int t=n+m-2;
        int r=m-1;
        //ncr
        int ans=fact(t,r);
        return (int)ans;
    }
};