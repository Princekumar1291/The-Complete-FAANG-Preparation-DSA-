//Problem Link: https://leetcode.com/problems/trapping-rain-water/submissions/1300848482/


#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& heights) {
  int n=heights.size();
  vector<int> next(n);

  int maxi=0;
  for(int i=n-1;i>=0;i--){
      next[i]=maxi;
      maxi=max(maxi,heights[i]);
  }

  vector<int> prev(n);
  maxi=0;
  for(int i=0;i<n;i++){
      prev[i]=maxi;
      maxi=max(maxi,heights[i]);
  }

  vector<int> mnm(n);
  for(int i=0;i<n;i++){
      mnm[i]=min(prev[i],next[i]);
  }

  vector<int> ans(n);
  for(int i=0;i<n;i++){
      int temp=mnm[i]-heights[i];
      if(temp<=0) ans[i]=0;
      else ans[i]=temp;
  }

  int sum=0;
  for(int i=0;i<n;i++){
      sum+=ans[i];
  }

  return sum;
}


int main(){
  
  return 0;
}