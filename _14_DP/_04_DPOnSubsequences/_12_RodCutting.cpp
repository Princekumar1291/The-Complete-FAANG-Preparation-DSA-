//Problem Link: https://www.geeksforgeeks.org/problems/rod-cutting0840/1




class Solution {
  public:
    int md=-(int)1e9;
    int helper(vector<int>& price,int n,int target,vector<vector<int>>& dp){
        if(target<0) return md;
        if(n<0){
            if(target>=0) return 0;
            else return md;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        int take=price[n]+helper(price,n,target-(n+1),dp);
        int notTake=0+helper(price,n-1,target,dp);
        return dp[n][target]=max(take,notTake);
    }
    int cutRod(vector<int> &price) {
        int n=price.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return helper(price,n-1,n,dp);
    }
};





  public:
    int helper(int w,int price[],int i,vector<vector<int>>& dp){
      if(i==0){
          if(w>=i+1) return w/(i+1)*price[i];
          return 0;
      }  
      if(dp[i][w]!=-1) return dp[i][w];
      int notTake=helper(w,price,i-1,dp);
      int take=INT_MIN;
      if(w>=i+1) take=price[i]+helper(w-(i+1),price,i,dp);
      return dp[i][w]=max(take,notTake);
    }
    int cutRod(int price[], int n) {
        //code here
        int w=n;
        vector<vector<int>> dp(n,vector<int> (w+1,-1));
        return helper(w,price,n-1,dp);
    }
};