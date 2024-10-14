//Problem Link: https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> v){
  int n=v.size();
  vector<int> ans(n);
  int maxEle=-1;
  for(int i=n-1;i>=0;i--){
    ans[i]=maxEle;
    maxEle=max(maxEle,v[i]);
  }
  return ans;
}


int main(){
  vector<int> v={12,7,4,11,9,10};
  vector<int> ans=nextGreater(v);
  for(auto ele: ans){
    cout<<ele<<" ";
  }
  return 0;
}