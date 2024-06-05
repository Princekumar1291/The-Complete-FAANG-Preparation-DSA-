#include<bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m){
  m=(long long)m;
  long long low=1;
  long long high=m;
  while(low<=high){
      long long mid=low+(high-low)/2;
      long long ans=1;
      for(int i=1;i<=n;i++){
          ans*=mid;
          if(ans>m) break;
      }
      if(ans==m) return mid;
      if(ans<m) {
          low=mid+1;
      }
      else high=mid-1;
  }
  return -1;
}

int main(){
  int ans=NthRoot(6,4096);
  cout<<ans;
  return 0;
}