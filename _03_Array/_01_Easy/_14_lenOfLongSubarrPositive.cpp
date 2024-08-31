//Problem Link: https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems




#include <bits/stdc++.h>
using namespace std;
// array having only positive element 
int longestSubarrayWithSumK(vector<int> v, long long k) {
    int n=v.size();
    int ans=0;
    long long sum=0;
    int i=0;
    int j=0;
    while(i<n){
        sum+=v[i];
        while(j<i && sum>k) {
            sum-=v[j];
            j++;
        }
        if(sum==k) ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}

int main(){
  vector<int> nums {9,9,4,1,3,5,3,0,8};
  int mxlength=lenOfLongSubarr(nums,9);
  cout<<"Max Length is: "<<mxlength;
  return 0;
}