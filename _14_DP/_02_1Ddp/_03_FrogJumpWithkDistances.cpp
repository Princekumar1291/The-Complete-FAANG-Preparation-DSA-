//Probelm Link: https://www.geeksforgeeks.org/problems/minimal-cost/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimal-cost


//brut
class Solution {
  public:
    int helper(vector<int>& height,int n,int k,vector<int>& v){
        if(n==0) return 0;
        int ans=INT_MAX;
        for(int i=1;i<=k;i++){
            int lf=INT_MAX;
            if(n-i>=0) lf=helper(height,n-i,k,v)+abs(height[n]-height[n-i]);
            ans=min(ans,lf);
        }
        return ans;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> v;
        return helper(height,n-1,k,v);
    }
};











//optmal memoization
class Solution {
  public:
    int helper(vector<int>& height,int n,int k,vector<int>& v){
        if(n==0) return 0;
        int ans=INT_MAX;
        if(v[n]!=-1) return v[n];
        for(int i=1;i<=k;i++){
            int lf=INT_MAX;
            if(n-i>=0) lf=helper(height,n-i,k,v)+abs(height[n]-height[n-i]);
            ans=min(ans,lf);
        }
        return v[n]=ans;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> v(n,-1);
        return helper(height,n-1,k,v);
    } 
};






//dp

class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> dp(n,-1);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int temp=INT_MAX;
            for(int j=1;j<=k;j++){
                int dem=INT_MAX;
                if(i-j>=0) dem=dp[i-j]+abs(height[i]-height[i-j]);
                temp=min(temp,dem);
            }
            dp[i]=temp;
        }
        return dp[n-1];
    }
};