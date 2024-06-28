// Problem Link: https://leetcode.com/problems/subarray-product-less-than-k/description/

#include<bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size();
    int i=0;
    int j=0;
    int pro=1;
    int ans=0;
    while(j<n){
        pro*=nums[j];
        while(pro>=k && i<=j) {
            pro/=nums[i];
            i++;
        }
        ans+=(j-i+1);
        j++;
    }
    return ans;
}


int main(){
  
  return 0;
}