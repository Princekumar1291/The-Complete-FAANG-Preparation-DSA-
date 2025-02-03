//Problem Link: https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1






class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    int md=-(int)1e6;
    int helper(vector<int>& val,vector<int>& wt,int cap,int n,vector<vector<int>>& dp){
        if(cap<0) return md;
        if(n<0){
            if(cap>=0) return 0;
            else return md;
        }
        if(dp[n][cap]!=-1) return dp[n][cap];
        int take=val[n]+helper(val,wt,cap-wt[n],n-1,dp);
        int notTake=0+helper(val,wt,cap,n-1,dp);
        return dp[n][cap]=max(take,notTake);
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>> dp(n,vector<int>(capacity+1,-1));
        return helper(val,wt,capacity,n-1,dp);
    }
};






class Solution
{
    public:
    int helper(int w,int wt[],int val[],int i,vector<vector<int>>& dp){
        if(i==0){
            if(w==0) return 0;
            if(w>=wt[0]) return val[0];
            return 0;
        }
        if(dp[i][w]!=-1) return dp[i][w];
        int notTake=helper(w,wt,val,i-1,dp);
        int take=INT_MIN;
        if(w>=wt[i]) take=val[i]+helper(w-wt[i],wt,val,i-1,dp);
        return dp[i][w]=max(notTake,take);
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int>(w+1,-1));
       return helper(w,wt,val,n-1,dp);
    }
};