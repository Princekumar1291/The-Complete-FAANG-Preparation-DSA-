//Problem Link: https://leetcode.com/problems/product-of-array-except-self/description/

#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
  int n=nums.size();

  vector<int> Prefpro(n);
  int pro=nums[0];
  Prefpro[0]=1;
  for(int i=1;i<n;i++){
      Prefpro[i]=pro;
      pro*=nums[i];
  }

  vector<int> Sufpro(n);
  pro=nums[n-1];
  Sufpro[n-1]=1;
  for(int i=n-2;i>=0;i--){
      Sufpro[i]=pro;
      pro*=nums[i];
  }

  vector<int> ans(n);
  for(int i=0;i<n;i++){
      ans[i]=Sufpro[i]*Prefpro[i];
  }

  return ans;
}


int main(){
  
  return 0;
}











class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pro=1;
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) pro*=nums[i];
            else c++;
        }
        if(c>1) pro=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=pro;
            else if(c>0) nums[i]=0;
            else nums[i]=pro/nums[i];
        }
        return nums;
    }
};