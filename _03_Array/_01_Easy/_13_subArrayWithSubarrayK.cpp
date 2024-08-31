//Problem Link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k




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

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k){
        int maxLen=0;
        int sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k) maxLen=i+1;
            int diff=sum-k;
            if(mp.find(diff)!=mp.end()){
                maxLen=max(maxLen,i-mp[diff]);
            }
            if(mp.find(sum)==mp.end()) mp[sum]=i;
        }
        return maxLen;
    } 

};



int main(){
  vector<int> nums {9,9,4,1,3,5,3,0,-3};
  int mxlength=lenOfLongSubarr(nums,9);
  cout<<"Max Length is: "<<mxlength;
  return 0;
}