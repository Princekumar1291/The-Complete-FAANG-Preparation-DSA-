#include <bits/stdc++.h>
using namespace std;
// array having only positive element 
int lenOfLongSubarr(vector<int> v,int target){
  int left=0,right=0;
  int sum=0;
  int n=v.size();
  int mxLength=0;

  while(right<n){
    while(sum>target){
      sum-=v[left];
      left++;
    }
    if(sum==target) mxLength=max(mxLength,right-left);
    sum+=v[right];
    right++;
  }
  return mxLength;
}

int main(){
  vector<int> nums {9,9,4,1,3,5,3,0,8};
  int mxlength=lenOfLongSubarr(nums,9);
  cout<<"Max Length is: "<<mxlength;
  return 0;
}