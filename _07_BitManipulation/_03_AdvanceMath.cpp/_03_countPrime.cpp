// Problem Link: https://leetcode.com/problems/count-primes/description/



#include<bits/stdc++.h>
using namespace std;


//seiv erothenus algo
int countPrimes(int n) {
  vector<int> v(n+1,1);
  for(int i=2;i<=n;i++){
      if(v[i]==1){
          for(int j=2*i;j<=n;j+=i){
              v[j]=0;
          }
      }
  }
  int ans=0;
  for(int i=2;i<n;i++){
      if(v[i]==1) ans++;
  }
  return ans;
}


int main(){
  
  return 0;
}