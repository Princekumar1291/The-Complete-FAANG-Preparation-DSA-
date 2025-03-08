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



class Solution {
    public:
    
        int SubarrayWithSumLessThanGoal(vector<int>& nums, int goal){
            int l=0,r=0,n=nums.size();
            int sum = 0,cnt = 0;
            if(goal < 0) return 0; //so that goal-1 doesn't give a problem
            while(r<n){
                sum += nums[r];
                while(sum > goal){
                    sum -= nums[l];
                    l++;
                } // keeping the r fix, start trimming l from left side.
                cnt += (r - l + 1); // all subarray possible from l to r.
                r++;
            }
            return cnt;
        }
    
        int numSubarraysWithSum(vector<int>& nums, int goal) {
            int a = SubarrayWithSumLessThanGoal(nums, goal);
            int b = SubarrayWithSumLessThanGoal(nums, goal - 1);
    
            return a - b;
        }
    };