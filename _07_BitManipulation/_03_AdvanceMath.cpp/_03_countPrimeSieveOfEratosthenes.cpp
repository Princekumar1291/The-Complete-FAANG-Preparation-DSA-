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


class Solution{
public:
    void sieveAlgo(vector<int>& v,int n){
        for(int i=2;i*i<=n;i++){
            if(v[i]==1){
                for(int j=i*i;j<=n;j=j+i){
                    v[j]=0;
                }
            }
        }
    }
    vector<int> sieveOfEratosthenes(int n){
        vector<int> ans;
        vector<int> sieve(n+1,1);
        sieveAlgo(sieve,n);
        for(int i=2;i<=n;i++) if(sieve[i]==1) ans.push_back(i);
        return ans;
    }
};
