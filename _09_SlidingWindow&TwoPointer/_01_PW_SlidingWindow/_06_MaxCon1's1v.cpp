// Problem Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
    int n=nums.size();
    int i=0,j=0;
    int ans=0;
    int c=0;
    while(i<n){
        if(nums[i]==0) c++;
        if(c<=1) ans=max(ans,i-j);
        while(c>1){
            if(nums[j]==1) j++;
            else{
                j++;
                c--;
            }
        }
        i++;
    }
    return ans;
}


int main(){
  
  return 0;
}