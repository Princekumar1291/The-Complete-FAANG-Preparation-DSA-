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











//optmal
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