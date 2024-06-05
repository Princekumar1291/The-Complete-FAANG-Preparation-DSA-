#include <bits/stdc++.h>
using namespace std;
//array can have both positive and negative element

int subArrayBrut(vector<int> v,int target){
  int n=v.size();
  int mxLength=0;
  for(int i=0;i<n;i++){
    int temp=0;
    for(int j=i;j<n;j++){
      temp+=v[j];
      if(temp==target) mxLength=max(mxLength,j-i+1);
    }
  }
  return mxLength;
}

int lenOfLongSubarr(vector<int> A, int K){
  int n=A.size();
  unordered_map<int, int> mp;
  int sum = 0;
  int maxRange = 0;
  for (int i = 0; i < n; i++){
    sum += A[i];
    if (mp.find(sum) == mp.end()) mp[sum] = i;
    if (sum == K) maxRange = i + 1;
    int rem = sum - K;
    if (mp.find(rem) != mp.end()){
      int len = i - mp[rem];
      maxRange = max(maxRange, len);
    }
  }
  return maxRange;
}



int main(){
  vector<int> nums {9,9,4,1,3,5,3,0,-3};
  int mxlength=lenOfLongSubarr(nums,9);
  cout<<"Max Length is: "<<mxlength;
  return 0;
}