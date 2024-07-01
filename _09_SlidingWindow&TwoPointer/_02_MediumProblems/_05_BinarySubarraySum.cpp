// Problem Link: https://leetcode.com/problems/binary-subarrays-with-sum/description/

#include<bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int>& nums, int goal) {
    int n=nums.size();
    int ans=0;
    int i=0;
    int j=0;
    int sum=0;
    unordered_map<int,int> mp;
    while(j<n){
        sum+=nums[j];
        int rem=sum-goal;
        if(rem==0) ans++;
        if(mp.find(rem)!=mp.end()){
            ans+=mp[rem];
        }
        mp[sum]++;
        j++;
    }
    return ans;
}

int main(){
  
  return 0;
}