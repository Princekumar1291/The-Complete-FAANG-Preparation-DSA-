// Problem Link: https://leetcode.com/problems/subarray-product-less-than-k/description/

#include<bits/stdc++.h>
using namespace std;


int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0; // If k is 0 or 1, no subarray will have a product less than k
    int n = nums.size();
    int ans = 0;
    long long pro = 1;
    int i = 0, j = 0;

    while (j < n) {
        pro *= nums[j]; // Expand the window by including nums[j]
        while (pro >= k) { // Shrink the window from the left if the product is >= k
            pro /= nums[i];
            i++;
        }
        ans += (j - i + 1); // Count the number of valid subarrays ending at j
        j++; // Move the right pointer
    }
    return ans;
}





int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int n=nums.size();
    int ans=0;
    long long pro=1;
    int i=0,j=0;
    while(j<n){
        pro*=nums[j];
        while(pro>=k && i<=j){
            ans+=(j-i);
            pro/=nums[i];
            i++;
        }
        j++;
    }
    while(i<n && i<=j){
        ans+=(j-i);
        pro/=nums[i];
        i++;
    }
    return ans;
}




int main(){
  
  return 0;
}