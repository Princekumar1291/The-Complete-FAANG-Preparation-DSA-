#include<bits/stdc++.h>
using namespace std;

int sqrtRoot(int x){
  long long low=1;
  long long high=x;
  long long ans=1;
  while(low<=high){
    long long mid=low+(high-low)/2;
    long long temp=mid*mid;
    if(temp<=(long long)x) {
        ans=mid;
        low=mid+1;
    }
    else high=mid-1;
  }
  return ans;
}

int main(){
  int ans=sqrtRoot(24);
  cout<<ans;
  return 0;
}