#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
  int ans=0;
  vector<bool> arr(n+1,true);
  for(int i=2;i*i<=n;i++){
    if(arr[i]==1){
      int temp=2*i;
      while(temp<=n){
        arr[temp]=false;
        temp=temp+i;
      }
    }
  }
  for(int i=2;i<n;i++){
    if(arr[i]==true) ans++;
  }
  return ans;
}

int main(){
  
  return 0;
}