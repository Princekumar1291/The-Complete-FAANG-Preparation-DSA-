//Problem Link: https://leetcode.com/problems/count-number-of-nice-subarrays/submissions/1305324189/


#include<bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
    int n=nums.size();
    unordered_map<int,int> mp;
    int sum=0;
    mp[0]=1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0) sum+=0;
        else sum+=1;
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            ans+=mp[rem];
        }
        mp[sum]++;
    }
    return ans;
}

int main(){
  
  return 0;
}