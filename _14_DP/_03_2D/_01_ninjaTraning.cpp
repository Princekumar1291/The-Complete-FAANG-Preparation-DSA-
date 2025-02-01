
//Problem Link: https://www.geeksforgeeks.org/problems/geeks-training/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geeks-training


class Solution {
  public:
    int helper(vector<vector<int>>& arr,int day,int last,vector<vector<int>>& dp){
        if(day==0){
            int maxi=0;
            for(int task=0;task<3;task++){
                if(task!=last) maxi=max(maxi,arr[0][task]);
            }
            return maxi;
        }
        if(dp[day][last]!=-1) return dp[day][last];
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last){
                int points=arr[day][task]+helper(arr,day-1,task,dp);
                maxi=max(maxi,points);
            }
        }
        return dp[day][last]=maxi;
    }
    int maximumPoints(vector<vector<int>>& arr) {
        int k=3;
        int n=arr.size();
        int day=n-1;
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return helper(arr,day,k,dp);
    }
};