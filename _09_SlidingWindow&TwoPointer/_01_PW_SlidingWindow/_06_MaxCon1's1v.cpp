// Problem Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/

#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    int i=0,j=0;
    int sum=0;
    int k=1;
    bool check=true;
    while(i<n){
        if(nums[i]==1){
            sum++;
        }
        else if(k>0){
            k--;
            check=false;
        }
        else {
            ans=max(ans,sum);
            while(nums[j]==1){
                sum--;
                j++;
            }
            j++;
            check=false;
        }
        i++;
    }ans=max(ans,sum);
    
    
    return check ? ans-1 : ans;
}


int main(){
  
  return 0;
}