// Problem Link: https://leetcode.com/problems/max-consecutive-ones-iii/description/

#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int ans=0;
    int i=0,j=0;
    int n=nums.size();
    int c=0;
    while(i<n){
        if(nums[i]==0) c++;
        if(c<=k) ans=max(ans,i-j+1);
        while(c>k){
            if(nums[j]==1) j++;
            else {
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