
//Problem Link: https://www.geeksforgeeks.org/problems/geek-jump/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geek-jump





class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        if(n==0) return 0;
        if(n==1) return 0;
        int left=minimumEnergy(height,n-1)+abs(height[n-1]-height[n-2]);
        int right=minimumEnergy(height,n-2)+abs(height[n-1]-height[n-3]);
        return min(left,right);
    }
};






//opt dp bottom-Up

class Solution {
  public:
    int minimumEnergy(vector<int>& v, int n) {
        vector<int> dp(n,0);
        dp[0]=0;
        int ss=INT_MAX;
        for(int i=1;i<n;i++){
            int fs=dp[i-1]+abs(v[i]-v[i-1]);
            if(i>1) ss=dp[i-2]+abs(v[i]-v[i-2]);
            dp[i]=min(fs,ss);
        }
        return dp[n-1];
    }
};


//dp space opt
class Solution {
  public:
    int minimumEnergy(vector<int>& v, int n) {
        if(n==1) return 0;
        if(n==2) return abs(v[1]-v[0]);
        int dp1=0;
        int dp2=abs(v[1]-v[0]);
        for(int i=2;i<n;i++){
            int fs=dp2+abs(v[i]-v[i-1]);
            int ss=dp1+abs(v[i]-v[i-2]);
            dp1=dp2;
            dp2=min(fs,ss);
        }
        return dp2;
    }
};








