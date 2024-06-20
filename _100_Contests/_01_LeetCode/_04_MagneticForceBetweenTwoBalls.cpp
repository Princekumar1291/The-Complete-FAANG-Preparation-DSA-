//Problem Link: https://leetcode.com/problems/magnetic-force-between-two-balls/?envType=daily-question&envId=2024-06-20


#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> v,int t){
  int n=v.size();
  int m=1;
  int prev=v[0];
  for(int i=1;i<n;i++){
      if(v[i]-prev>=t){
          m++;
          prev=v[i];
      }
  }
  return m;
}
int maxDistance(vector<int>& v, int m) {
  sort(v.begin(),v.end());
  int ans=-1;
  int mini=*min_element(v.begin(),v.end());
  int maxi=*max_element(v.begin(),v.end());
  int low=1;
  int high=maxi-mini;
  while(low<=high){
      int mid=low+(high-low)/2;
      int temp=helper(v,mid);
      if(temp<m){
          high=mid-1;
      }
      else {
          ans=mid;
          low=mid+1;
      }
  }
  return ans;
}

int main(){
  
  return 0;
}