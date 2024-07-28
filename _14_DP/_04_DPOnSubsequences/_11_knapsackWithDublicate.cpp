//Problem Link: https://www.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=knapsack-with-duplicate-items





class Solution{
public:
    int helper(int w,int wt[],int val[],int i,vector<vector<int>> &dp){
        if(i==0){
            if(w>=wt[0]){
                return (w/wt[i])*val[0];
            }
            return 0;
        }
        if(dp[i][w]!=-1) return dp[i][w];
        int notTake=helper(w,wt,val,i-1,dp);
        int take=INT_MIN;
        if(w>=wt[i]) take=val[i]+helper(w-wt[i],wt,val,i,dp);
        return dp[i][w]=max(take,notTake);
    }
    int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n,vector<int>(w+1,-1));
        return helper(w,wt,val,n-1,dp);
    }
};