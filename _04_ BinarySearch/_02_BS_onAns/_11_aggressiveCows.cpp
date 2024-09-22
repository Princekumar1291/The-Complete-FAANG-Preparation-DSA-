//Problem Link: https://www.geeksforgeeks.org/problems/aggressive-cows/1


#include<bits/stdc++.h>
using namespace std;
bool isPos(int m,int cows,vector<int>& stalls){
  int n=stalls.size();
  int count=1;
  int curr=stalls[0];
  for(int i=1;i<n;i++){
      if((stalls[i]-curr)>=m){
          curr=stalls[i];
          count++;
      }
  }
  return count>=cows ? true : false;
}
int solve(int n, int k, vector<int> &stalls) {
  sort(stalls.begin(),stalls.end());
  int low=1;
  int high=stalls[n-1];
  int ans=-1;
  while(low<=high){
      int mid=low+(high-low)/2;
      if(isPos(mid,k,stalls)){
          ans=mid;
          low=mid+1;
      }
      else high=mid-1;
  }
  return ans;
}
int main(){
  
  return 0;
}