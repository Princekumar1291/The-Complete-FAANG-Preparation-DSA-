//Problem Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> v,int d){
  int ans=0;
  int n=v.size();
  for(int i=0;i<n;i++){
      if(v[i]%d==0) ans+=v[i]/d;
      else ans+=v[i]/d+1;
  }
  return ans;
}
int smallestDivisor(vector<int>& nums, int threshold) {
  int n=nums.size();
  int low=1;
  int ans=-1;
  int high=*max_element(nums.begin(),nums.end());
  while(low<=high){
      int mid=low+(high-low)/2;
      int sum=helper(nums,mid);
      if(sum>threshold) low=mid+1;
      else{
          ans=mid;
          high=mid-1;
      }
  }
  return ans;
}

int main() {
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    int result = smallestDivisor(nums, threshold);
    cout << "Smallest Divisor: " << result << endl;
    return 0;
}