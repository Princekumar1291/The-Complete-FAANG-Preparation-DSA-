//Problem Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/


class Solution {
public:
int helper(vector<int> v,int mid,int k){
    int n=v.size();
    int ans=0;
    int t=0;
    for(int i=0;i<n;i++){
        if(v[i]<=mid){
            t++;
        }
        else{
            ans+=t/k;
            t=0;
        }
    }
    ans+=t/k;
    return ans;
}
int minDays(vector<int>& v, int m, int k) {
    if((long long)m*k>v.size()) return -1;
    int maxi=*max_element(v.begin(),v.end());
    int low=1;
    int high=maxi;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int totalBuketForm=helper(v,mid,k);
        if(totalBuketForm<m){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }

    }
    return ans;
}
};