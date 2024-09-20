//Problem Link:https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root

#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int n) {
  long long int temp;
  long long int low=1;
  long long int high=n;
  long long int ans;
  while(low<=high){
      long long int mid=low+(high-low)/2;
      if(mid*mid<=n){
          ans=mid;
          low=mid+1;
      }
      else high=mid-1;
  }
  return ans;
}

int main(){
  int ans=floorSqrt(24);
  cout<<ans;
  return 0;
}